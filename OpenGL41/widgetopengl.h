#ifndef WIDGETOPENGL_H
#define WIDGETOPENGL_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions_1_0>
#include <QOpenGLFunctions_4_5_Core>
#include <QMatrix4x4>

#include "light.h"
#include "material.h"


#define MIN_OPENGL_VERSION "4.5"


class OpenGLVersionTest: public QOpenGLFunctions_1_0
{
public:
    QString version()
    {
        initializeOpenGLFunctions();
        return (char *)glGetString(GL_VERSION);
    }
};


struct InstanceData
{
    GLfloat x, y, z;
    GLfloat r, g, b;
};


class WidgetOpenGL: public QOpenGLWidget, public QOpenGLFunctions_4_5_Core
{
public:
    WidgetOpenGL(QWidget *parent = 0): QOpenGLWidget(parent), slider(0) 
    {
        QSurfaceFormat format;
        format.setSamples(4);
        setFormat(format);
    }

    void v_transform(float rot_x, float rot_y, float rot_z, float zoom);
    void move_light(float x, float y, float z);
    void move_slider(int _slider);

protected:
    bool init_ok;
    int triangles_cnt, triangles_light_cnt;

    InstanceData positions_and_colors[1000]; // !!!

    QMatrix4x4 m_matrix, v_matrix, p_matrix;
    int slider;

    Light light;

    GLuint shaderProgram_inst, shaderProgram_light;
    GLuint VAO, VAO_light;
    GLuint tex_cube_color;

    GLuint loadShader(GLenum type, QString fname);
    GLuint linkProgram(GLuint vertex_shader, GLuint fragment_shader, GLuint geometry_shader = 0, GLuint tess_eval_shader = 0, GLuint tess_control_shader = 0);
    GLuint getUniformLocation(GLuint program, const GLchar *uniform);
    GLuint getAttribLocation(GLuint program, const GLchar *attrib);
    QMatrix3x3 upperLeftMatrix3x3(QMatrix4x4 const &m);
    GLuint loadTexture2D(QString fname, bool srgb);

    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);
    float f_rand(float min, float max);
};


#endif // WIDGETOPENGL_H
