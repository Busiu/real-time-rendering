/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <widgetopengl.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSlider *horizontalSlider_Slider;
    QSlider *verticalSliderD;
    WidgetOpenGL *widgetOpenGL;
    QGroupBox *groupBoxView;
    QHBoxLayout *horizontalLayout;
    QSlider *verticalSliderRotX;
    QSlider *verticalSliderRotZ;
    QSlider *verticalSliderRotY;
    QSpacerItem *horizontalSpacer;
    QSlider *verticalSliderZoom;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(883, 595);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSlider_Slider = new QSlider(centralWidget);
        horizontalSlider_Slider->setObjectName(QString::fromUtf8("horizontalSlider_Slider"));
        horizontalSlider_Slider->setMaximum(10000);
        horizontalSlider_Slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_Slider, 1, 0, 1, 1);

        verticalSliderD = new QSlider(centralWidget);
        verticalSliderD->setObjectName(QString::fromUtf8("verticalSliderD"));
        verticalSliderD->setMinimum(1);
        verticalSliderD->setMaximum(1000);
        verticalSliderD->setValue(50);
        verticalSliderD->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSliderD, 0, 6, 2, 1);

        widgetOpenGL = new WidgetOpenGL(centralWidget);
        widgetOpenGL->setObjectName(QString::fromUtf8("widgetOpenGL"));
        widgetOpenGL->setMinimumSize(QSize(200, 200));

        gridLayout->addWidget(widgetOpenGL, 0, 0, 1, 1);

        groupBoxView = new QGroupBox(centralWidget);
        groupBoxView->setObjectName(QString::fromUtf8("groupBoxView"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxView->sizePolicy().hasHeightForWidth());
        groupBoxView->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(groupBoxView);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalSliderRotX = new QSlider(groupBoxView);
        verticalSliderRotX->setObjectName(QString::fromUtf8("verticalSliderRotX"));
        verticalSliderRotX->setMaximum(3600);
        verticalSliderRotX->setValue(200);
        verticalSliderRotX->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSliderRotX);

        verticalSliderRotZ = new QSlider(groupBoxView);
        verticalSliderRotZ->setObjectName(QString::fromUtf8("verticalSliderRotZ"));
        verticalSliderRotZ->setMaximum(3600);
        verticalSliderRotZ->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSliderRotZ);

        verticalSliderRotY = new QSlider(groupBoxView);
        verticalSliderRotY->setObjectName(QString::fromUtf8("verticalSliderRotY"));
        verticalSliderRotY->setMaximum(3600);
        verticalSliderRotY->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSliderRotY);

        horizontalSpacer = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalSliderZoom = new QSlider(groupBoxView);
        verticalSliderZoom->setObjectName(QString::fromUtf8("verticalSliderZoom"));
        verticalSliderZoom->setMaximum(1000);
        verticalSliderZoom->setValue(100);
        verticalSliderZoom->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSliderZoom);


        gridLayout->addWidget(groupBoxView, 0, 5, 2, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBoxView->setTitle(QCoreApplication::translate("MainWindow", "Widok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
