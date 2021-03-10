#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_verticalSliderRotX_valueChanged(int);
    void on_verticalSliderRotY_valueChanged(int);
    void on_verticalSliderRotZ_valueChanged(int);
    void on_verticalSliderZoom_valueChanged(int);
    void on_verticalSliderLightX_valueChanged(int);
    void on_verticalSliderLightY_valueChanged(int);
    void on_verticalSliderLightZ_valueChanged(int);
    void on_horizontalSlider_Slider_valueChanged(int value);
    void on_pushButton_clicked();
    void on_verticalSliderShadowMap_valueChanged(int);

private:
    Ui::MainWindow *ui;

    void apply_v_transform();
    void move_light();
    void change_resolution_shadow_map();
};

#endif // MAINWINDOW_H
