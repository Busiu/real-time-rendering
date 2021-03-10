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
#include <QtWidgets/QMenuBar>
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
    WidgetOpenGL *widgetOpenGL;
    QGroupBox *groupBoxTerrain;
    QHBoxLayout *horizontalLayout_2;
    QSlider *verticalSliderTerHeightScale;
    QSlider *verticalSliderTerHeightOffset;
    QGroupBox *groupBoxView;
    QHBoxLayout *horizontalLayout;
    QSlider *verticalSliderRotX;
    QSlider *verticalSliderRotZ;
    QSlider *verticalSliderRotY;
    QSpacerItem *horizontalSpacer;
    QSlider *verticalSliderZoom;
    QSlider *horizontalSlider_Slider;
    QGroupBox *groupBoxFog;
    QHBoxLayout *horizontalLayout_3;
    QSlider *verticalSliderFogBrightness;
    QSlider *verticalSliderFogDensity;
    QSlider *verticalSliderFogDensity2;
    QSlider *verticalSliderFogLevel;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(888, 595);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widgetOpenGL = new WidgetOpenGL(centralWidget);
        widgetOpenGL->setObjectName(QString::fromUtf8("widgetOpenGL"));
        widgetOpenGL->setMinimumSize(QSize(200, 200));

        gridLayout->addWidget(widgetOpenGL, 0, 0, 1, 1);

        groupBoxTerrain = new QGroupBox(centralWidget);
        groupBoxTerrain->setObjectName(QString::fromUtf8("groupBoxTerrain"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxTerrain->sizePolicy().hasHeightForWidth());
        groupBoxTerrain->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(groupBoxTerrain);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalSliderTerHeightScale = new QSlider(groupBoxTerrain);
        verticalSliderTerHeightScale->setObjectName(QString::fromUtf8("verticalSliderTerHeightScale"));
        verticalSliderTerHeightScale->setMaximum(200);
        verticalSliderTerHeightScale->setValue(33);
        verticalSliderTerHeightScale->setOrientation(Qt::Vertical);

        horizontalLayout_2->addWidget(verticalSliderTerHeightScale);

        verticalSliderTerHeightOffset = new QSlider(groupBoxTerrain);
        verticalSliderTerHeightOffset->setObjectName(QString::fromUtf8("verticalSliderTerHeightOffset"));
        verticalSliderTerHeightOffset->setMaximum(200);
        verticalSliderTerHeightOffset->setValue(87);
        verticalSliderTerHeightOffset->setOrientation(Qt::Vertical);

        horizontalLayout_2->addWidget(verticalSliderTerHeightOffset);


        gridLayout->addWidget(groupBoxTerrain, 0, 2, 2, 1);

        groupBoxView = new QGroupBox(centralWidget);
        groupBoxView->setObjectName(QString::fromUtf8("groupBoxView"));
        sizePolicy.setHeightForWidth(groupBoxView->sizePolicy().hasHeightForWidth());
        groupBoxView->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(groupBoxView);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalSliderRotX = new QSlider(groupBoxView);
        verticalSliderRotX->setObjectName(QString::fromUtf8("verticalSliderRotX"));
        verticalSliderRotX->setMaximum(3600);
        verticalSliderRotX->setValue(218);
        verticalSliderRotX->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSliderRotX);

        verticalSliderRotZ = new QSlider(groupBoxView);
        verticalSliderRotZ->setObjectName(QString::fromUtf8("verticalSliderRotZ"));
        verticalSliderRotZ->setMaximum(3600);
        verticalSliderRotZ->setValue(0);
        verticalSliderRotZ->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSliderRotZ);

        verticalSliderRotY = new QSlider(groupBoxView);
        verticalSliderRotY->setObjectName(QString::fromUtf8("verticalSliderRotY"));
        verticalSliderRotY->setMaximum(3600);
        verticalSliderRotY->setValue(94);
        verticalSliderRotY->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSliderRotY);

        horizontalSpacer = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalSliderZoom = new QSlider(groupBoxView);
        verticalSliderZoom->setObjectName(QString::fromUtf8("verticalSliderZoom"));
        verticalSliderZoom->setMaximum(1000);
        verticalSliderZoom->setValue(58);
        verticalSliderZoom->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSliderZoom);


        gridLayout->addWidget(groupBoxView, 0, 1, 2, 1);

        horizontalSlider_Slider = new QSlider(centralWidget);
        horizontalSlider_Slider->setObjectName(QString::fromUtf8("horizontalSlider_Slider"));
        horizontalSlider_Slider->setMaximum(10000);
        horizontalSlider_Slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_Slider, 1, 0, 1, 1);

        groupBoxFog = new QGroupBox(centralWidget);
        groupBoxFog->setObjectName(QString::fromUtf8("groupBoxFog"));
        sizePolicy.setHeightForWidth(groupBoxFog->sizePolicy().hasHeightForWidth());
        groupBoxFog->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(groupBoxFog);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalSliderFogBrightness = new QSlider(groupBoxFog);
        verticalSliderFogBrightness->setObjectName(QString::fromUtf8("verticalSliderFogBrightness"));
        verticalSliderFogBrightness->setMaximum(1000);
        verticalSliderFogBrightness->setValue(750);
        verticalSliderFogBrightness->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(verticalSliderFogBrightness);

        verticalSliderFogDensity = new QSlider(groupBoxFog);
        verticalSliderFogDensity->setObjectName(QString::fromUtf8("verticalSliderFogDensity"));
        verticalSliderFogDensity->setMinimum(1);
        verticalSliderFogDensity->setMaximum(500);
        verticalSliderFogDensity->setValue(30);
        verticalSliderFogDensity->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(verticalSliderFogDensity);

        verticalSliderFogDensity2 = new QSlider(groupBoxFog);
        verticalSliderFogDensity2->setObjectName(QString::fromUtf8("verticalSliderFogDensity2"));
        verticalSliderFogDensity2->setMaximum(500);
        verticalSliderFogDensity2->setValue(130);
        verticalSliderFogDensity2->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(verticalSliderFogDensity2);

        verticalSliderFogLevel = new QSlider(groupBoxFog);
        verticalSliderFogLevel->setObjectName(QString::fromUtf8("verticalSliderFogLevel"));
        verticalSliderFogLevel->setMaximum(1000);
        verticalSliderFogLevel->setValue(590);
        verticalSliderFogLevel->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(verticalSliderFogLevel);


        gridLayout->addWidget(groupBoxFog, 0, 3, 2, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 888, 29));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBoxTerrain->setTitle(QCoreApplication::translate("MainWindow", "teren", nullptr));
        groupBoxView->setTitle(QCoreApplication::translate("MainWindow", "widok", nullptr));
        groupBoxFog->setTitle(QCoreApplication::translate("MainWindow", "mg\305\202a", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
