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
    void on_verticalSliderTerHeightScale_valueChanged(int);
    void on_verticalSliderTerHeightOffset_valueChanged(int value);
    void on_horizontalSlider_Slider_valueChanged(int value);
    void on_verticalSliderFogBrightness_valueChanged(int);
    void on_verticalSliderFogDensity_valueChanged(int value);
    void on_verticalSliderFogDensity2_valueChanged(int value);
    void on_verticalSliderFogLevel_valueChanged(int value);

private:
    Ui::MainWindow *ui;

    void apply_v_transform();
};

#endif // MAINWINDOW_H
