#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::apply_v_transform()
{
    ui->widgetOpenGL->v_transform(ui->verticalSliderRotX->value()*0.1,
                                  ui->verticalSliderRotY->value()*0.1,
                                  ui->verticalSliderRotZ->value()*0.1,
                                  ui->verticalSliderZoom->value()*0.01);
}



void MainWindow::on_verticalSliderRotX_valueChanged(int)
{
    apply_v_transform();
}

void MainWindow::on_verticalSliderRotY_valueChanged(int)
{
    apply_v_transform();
}

void MainWindow::on_verticalSliderRotZ_valueChanged(int)
{
    apply_v_transform();
}

void MainWindow::on_verticalSliderZoom_valueChanged(int)
{
    apply_v_transform();
}


void MainWindow::move_light()
{
    ui->widgetOpenGL->move_light(ui->verticalSliderLightX->value()*0.1,
                                 ui->verticalSliderLightY->value()*0.1,
                                 ui->verticalSliderLightZ->value()*0.1);
}

void MainWindow::on_verticalSliderLightX_valueChanged(int)
{
    move_light();
}

void MainWindow::on_verticalSliderLightY_valueChanged(int)
{
    move_light();
}

void MainWindow::on_verticalSliderLightZ_valueChanged(int)
{
    move_light();
}

void MainWindow::on_horizontalSlider_Slider_valueChanged(int value)
{
    ui->widgetOpenGL->move_slider(ui->widgetOpenGL->width()*value/10000);
}

void MainWindow::on_pushButton_clicked()
{
    ui->widgetOpenGL->readTexture();
}

void MainWindow::change_resolution_shadow_map()
{
    ui->widgetOpenGL->change_resolution_shadow_map(ui->verticalSliderShadowMap->value()*15);
}

void MainWindow::on_verticalSliderShadowMap_valueChanged(int)
{
    change_resolution_shadow_map();
}

