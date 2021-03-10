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
#include <QtWidgets/QWidget>
#include <widgetopengl.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBoxView;
    QHBoxLayout *horizontalLayout;
    QSlider *verticalSliderRotX;
    QSlider *verticalSliderRotY;
    QSlider *verticalSliderRotZ;
    QSlider *verticalSliderZoom;
    QSlider *horizontalSlider;
    QGroupBox *groupBoxVis;
    QHBoxLayout *horizontalLayout_2;
    QSlider *verticalSliderAlpha;
    QSlider *verticalSliderTreshold;
    WidgetOpenGL *widgetOpenGL;
    QGroupBox *horizontalGroupBox;
    QHBoxLayout *horizontalLayout_3;
    QSlider *verticalSliderGap;

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
        groupBoxView = new QGroupBox(centralWidget);
        groupBoxView->setObjectName(QString::fromUtf8("groupBoxView"));
        horizontalLayout = new QHBoxLayout(groupBoxView);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalSliderRotX = new QSlider(groupBoxView);
        verticalSliderRotX->setObjectName(QString::fromUtf8("verticalSliderRotX"));
        verticalSliderRotX->setMaximum(3600);
        verticalSliderRotX->setValue(900);
        verticalSliderRotX->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSliderRotX);

        verticalSliderRotY = new QSlider(groupBoxView);
        verticalSliderRotY->setObjectName(QString::fromUtf8("verticalSliderRotY"));
        verticalSliderRotY->setMaximum(3600);
        verticalSliderRotY->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSliderRotY);

        verticalSliderRotZ = new QSlider(groupBoxView);
        verticalSliderRotZ->setObjectName(QString::fromUtf8("verticalSliderRotZ"));
        verticalSliderRotZ->setMaximum(3600);
        verticalSliderRotZ->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSliderRotZ);

        verticalSliderZoom = new QSlider(groupBoxView);
        verticalSliderZoom->setObjectName(QString::fromUtf8("verticalSliderZoom"));
        verticalSliderZoom->setMaximum(1000);
        verticalSliderZoom->setValue(100);
        verticalSliderZoom->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSliderZoom);


        gridLayout->addWidget(groupBoxView, 0, 1, 2, 1);

        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMaximum(500);
        horizontalSlider->setValue(500);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 1, 0, 1, 1);

        groupBoxVis = new QGroupBox(centralWidget);
        groupBoxVis->setObjectName(QString::fromUtf8("groupBoxVis"));
        horizontalLayout_2 = new QHBoxLayout(groupBoxVis);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalSliderAlpha = new QSlider(groupBoxVis);
        verticalSliderAlpha->setObjectName(QString::fromUtf8("verticalSliderAlpha"));
        verticalSliderAlpha->setMaximum(1000);
        verticalSliderAlpha->setValue(1000);
        verticalSliderAlpha->setOrientation(Qt::Vertical);

        horizontalLayout_2->addWidget(verticalSliderAlpha);

        verticalSliderTreshold = new QSlider(groupBoxVis);
        verticalSliderTreshold->setObjectName(QString::fromUtf8("verticalSliderTreshold"));
        verticalSliderTreshold->setMaximum(1000);
        verticalSliderTreshold->setOrientation(Qt::Vertical);

        horizontalLayout_2->addWidget(verticalSliderTreshold);


        gridLayout->addWidget(groupBoxVis, 0, 4, 2, 1);

        widgetOpenGL = new WidgetOpenGL(centralWidget);
        widgetOpenGL->setObjectName(QString::fromUtf8("widgetOpenGL"));
        widgetOpenGL->setMinimumSize(QSize(200, 200));

        gridLayout->addWidget(widgetOpenGL, 0, 0, 1, 1);

        horizontalGroupBox = new QGroupBox(centralWidget);
        horizontalGroupBox->setObjectName(QString::fromUtf8("horizontalGroupBox"));
        horizontalLayout_3 = new QHBoxLayout(horizontalGroupBox);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalSliderGap = new QSlider(horizontalGroupBox);
        verticalSliderGap->setObjectName(QString::fromUtf8("verticalSliderGap"));
        verticalSliderGap->setEnabled(true);
        verticalSliderGap->setMinimum(1);
        verticalSliderGap->setMaximum(500);
        verticalSliderGap->setValue(100);
        verticalSliderGap->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(verticalSliderGap);


        gridLayout->addWidget(horizontalGroupBox, 0, 5, 2, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBoxView->setTitle(QCoreApplication::translate("MainWindow", "Widok", nullptr));
        groupBoxVis->setTitle(QCoreApplication::translate("MainWindow", "Params", nullptr));
        horizontalGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Gap", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
