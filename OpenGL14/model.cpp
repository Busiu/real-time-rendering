#include "model.h"

#include <QFile>
#include <QTextStream>
#include <QDebug>


void Model::readFile(QString fname, bool readNormals, bool readTextures, float scale)
{
    qDebug() << "Czytam '" << fname << "'...";

    read_normals = readNormals;
    read_textures = readTextures;

    QFile file(fname);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        throw QString("Nie moge otworzyc pliku '%1'").arg(fname);

    QTextStream ts(&file);
    source.clear();
    while (!ts.atEnd())
        source << ts.readLine();
    file.close();

    count_items();
    alloc_items();
    parse_items(scale);
}


void Model::count_items()
{
    v_cnt = vn_cnt = vt_cnt = f_cnt = 0;
    for (int i = 0; i < source.count(); i++)
    {
        if (source[i].startsWith("v "))
            v_cnt++;
        else if (source[i].startsWith("vn "))
            vn_cnt++;
        else if (source[i].startsWith("vt "))
            vt_cnt++;
        else if (source[i].startsWith("f "))
            f_cnt++;
    }
    qDebug() << "vertices:" << v_cnt;
    qDebug() << "normals:" << vn_cnt;
    qDebug() << "textures:" << vt_cnt;
    qDebug() << "faces:" << f_cnt;
}


void Model::alloc_items()
{
    v = new float[3*v_cnt];
    memset(v, 0, sizeof(float)*3*v_cnt);
    if (read_normals)
    {
      vn = new float[3*vn_cnt]();
      memset(vn, 0, sizeof(float)*3*vn_cnt);
    }
    if (read_textures)
    {
      vt = new float[2*vt_cnt]();
      memset(vt, 0, sizeof(float)*2*vt_cnt);
    }

    stride = 3 + 3*int(read_normals) + 2*int(read_textures);

    vertIndexes = new int[3 * f_cnt];
}


void Model::parse_items(float scale)
{
    QString l;
    QStringList sl, sl2;
    std::vector<std::tuple<int, int, int>> unique_vertexes;

    // wierzcholki...
    int p = 0;
    for (int i = 0; i < source.count(); i++)
    {
        if (source[i].startsWith("v "))
        {
            l = source[i].mid(2).trimmed();
            sl = l.split(" ");
            v[3*p + 0] = sl[0].toFloat()*scale;
            v[3*p + 1] = sl[1].toFloat()*scale;
            v[3*p + 2] = sl[2].toFloat()*scale;
            p++;
        }
    }

    // normalne...
    if (read_normals)
    {
        int p = 0;
        for (int i = 0; i < source.count(); i++)
        {
            if (source[i].startsWith("vn "))
            {
                l = source[i].mid(3).trimmed();
                sl = l.split(" ");
                vn[3*p + 0] = sl[0].toFloat();
                vn[3*p + 1] = sl[1].toFloat();
                vn[3*p + 2] = sl[2].toFloat();
                p++;
            }
        }
    }

    // wspolrzedne tekstur...
    if (read_textures)
    {
        int p = 0;
        for (int i = 0; i < source.count(); i++)
        {
            if (source[i].startsWith("vt "))
            {
                l = source[i].mid(3).trimmed();
                sl = l.split(" ");
                vt[2*p + 0] = sl[0].toFloat();
                vt[2*p + 1] = sl[1].toFloat();
                p++;
            }
        }
    }

   // trojkaty...
   int global_index = 0;
   std::vector<float> vertDataPreparator;
   for (int i = 0; i < source.count(); i++)
   {
        if (source[i].startsWith("f "))
        {
            l = source[i].mid(2).trimmed();
            sl = l.split(" ");

            for (int j = 0; j < 3; j++)
            {
                bool is_duplicated = false;

                sl2 = sl[j].split("/");
                while (sl2.count() < 3)
                    sl2.append("");

                int vi, vni, vti;

                vi = sl2[0].toInt() - 1;

                if (read_normals)
                {
                    vni = sl2[2].toInt() - 1;
                }
                else
                {
                    vni = 0;
                }

                if (read_textures)
                {
                    vti = sl2[1].toInt() - 1;
                }
                else
                {
                    vti = 0;
                }

                std::tuple<int, int, int> new_tuple (vi, vni, vti);
                for (unsigned long long k = 0; k < unique_vertexes.size(); k++)
                {
                    if (unique_vertexes[k] == new_tuple)
                    {
                        is_duplicated = true;
                        vertIndexes[global_index] = k;
                        // qDebug() << std::get<0>(unique_vertexes[k]) << " " << std::get<1>(unique_vertexes[k]);
                        break;
                    }
                }

                if (!is_duplicated)
                {
                    vertDataPreparator.push_back(v[3*vi + 0]);
                    vertDataPreparator.push_back(v[3*vi + 1]);
                    vertDataPreparator.push_back(v[3*vi + 2]);

                    if (read_normals)
                    {
                        vertDataPreparator.push_back(vn[3*vni + 0]);
                        vertDataPreparator.push_back(vn[3*vni + 1]);
                        vertDataPreparator.push_back(vn[3*vni + 2]);
                    }


                    if (read_textures)
                    {
                        vertDataPreparator.push_back(vt[2*vti + 0]);
                        vertDataPreparator.push_back(vt[2*vti + 1]);
                    }

                    vertIndexes[global_index] = unique_vertexes.size();
                    unique_vertexes.push_back(new_tuple);
                }
                global_index++;
            }            
        }
   }

   vertData = new float[vertDataPreparator.size()];
   for (unsigned long long i = 0; i < vertDataPreparator.size(); i++) {
       vertData[i] = vertDataPreparator[i];
   }
   vertDataSize = vertDataPreparator.size();

   delete [] v;
   delete [] vn;
   delete [] vt;

   qDebug() << "Liczba różnych wierzchołków: " << unique_vertexes.size();
   for (unsigned long long i = 0; i < unique_vertexes.size(); i++)
   {
       qDebug() << std::get<0>(unique_vertexes[i]) << " " << std::get<1>(unique_vertexes[i]);
   }

   qDebug() << "EBO: " << 3 * f_cnt;
   for (int i = 0; i < f_cnt; i++)
   {
       qDebug() << i << ":";
       qDebug() << vertIndexes[3 * i + 0] << " " << vertIndexes[3 * i + 1] << " " << vertIndexes[3 * i + 2];
   }

   qDebug() << "VBO: " << vertDataSize;
   for (int i = 0; i < unique_vertexes.size(); i++)
   {
       qDebug() << i << ":";
       qDebug() << "\tposition: " << vertData[stride * i + 0] << " " << vertData[stride * i + 1] << " " << vertData[stride * i + 2];
       qDebug() << "\tnormal: " << vertData[stride * i + 3] << " " << vertData[stride * i + 4] << " " << vertData[stride * i + 5];
   }

   qDebug() << "Ok, model wczytany.";
}

void Model::print()
{
    qDebug() << "stride:" << stride;
    for (int i = 0; i < f_cnt; i++)
    {
        QString s = "";
        for (int j = 0; j < stride*3; j++)
            s += (j ? ", ": "") + QString::number(vertData[i*stride + j]);
        qDebug() << s;
    }
}

