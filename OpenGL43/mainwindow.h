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
    void on_verticalSliderInner0_valueChanged(int);
    void on_verticalSliderInner1_valueChanged(int value);
    void on_verticalSliderOuter0_valueChanged(int value);
    void on_verticalSliderOuter1_valueChanged(int value);
    void on_verticalSliderOuter2_valueChanged(int value);
    void on_verticalSliderOuter3_valueChanged(int value);

    void on_horizontalSliderBender_valueChanged(int value);

private:
    Ui::MainWindow *ui;

    void apply_v_transform();
};

#endif // MAINWINDOW_H
