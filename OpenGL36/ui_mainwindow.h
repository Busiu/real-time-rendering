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
#include <QtWidgets/QLabel>
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
    QGroupBox *groupBoxLight;
    QGridLayout *gridLayout_2;
    QSlider *verticalSliderLightX;
    QSlider *verticalSliderLightY;
    QSlider *verticalSliderGamma;
    QSlider *verticalSliderLightZ;
    QLabel *label_gamma;
    QSlider *verticalSliderLightB;
    QGroupBox *groupBoxView;
    QHBoxLayout *horizontalLayout;
    QSlider *verticalSliderRotX;
    QSlider *verticalSliderRotZ;
    QSlider *verticalSliderRotY;
    QSpacerItem *horizontalSpacer;
    QSlider *verticalSliderZoom;
    QLabel *label;
    QSlider *horizontalSlider_Slider;
    QSlider *verticalSliderGaussianRadius;
    WidgetOpenGL *widgetOpenGL;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1064, 627);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBoxLight = new QGroupBox(centralWidget);
        groupBoxLight->setObjectName(QString::fromUtf8("groupBoxLight"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxLight->sizePolicy().hasHeightForWidth());
        groupBoxLight->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBoxLight);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSliderLightX = new QSlider(groupBoxLight);
        verticalSliderLightX->setObjectName(QString::fromUtf8("verticalSliderLightX"));
        verticalSliderLightX->setMinimum(-100);
        verticalSliderLightX->setMaximum(100);
        verticalSliderLightX->setValue(10);
        verticalSliderLightX->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSliderLightX, 0, 0, 2, 1);

        verticalSliderLightY = new QSlider(groupBoxLight);
        verticalSliderLightY->setObjectName(QString::fromUtf8("verticalSliderLightY"));
        verticalSliderLightY->setMinimum(-100);
        verticalSliderLightY->setMaximum(100);
        verticalSliderLightY->setValue(30);
        verticalSliderLightY->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSliderLightY, 0, 1, 2, 1);

        verticalSliderGamma = new QSlider(groupBoxLight);
        verticalSliderGamma->setObjectName(QString::fromUtf8("verticalSliderGamma"));
        verticalSliderGamma->setMaximum(500);
        verticalSliderGamma->setValue(219);
        verticalSliderGamma->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSliderGamma, 0, 4, 1, 1);

        verticalSliderLightZ = new QSlider(groupBoxLight);
        verticalSliderLightZ->setObjectName(QString::fromUtf8("verticalSliderLightZ"));
        verticalSliderLightZ->setMinimum(-100);
        verticalSliderLightZ->setMaximum(100);
        verticalSliderLightZ->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSliderLightZ, 0, 2, 2, 1);

        label_gamma = new QLabel(groupBoxLight);
        label_gamma->setObjectName(QString::fromUtf8("label_gamma"));

        gridLayout_2->addWidget(label_gamma, 1, 4, 1, 1);

        verticalSliderLightB = new QSlider(groupBoxLight);
        verticalSliderLightB->setObjectName(QString::fromUtf8("verticalSliderLightB"));
        verticalSliderLightB->setMaximum(1000);
        verticalSliderLightB->setValue(10);
        verticalSliderLightB->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSliderLightB, 0, 3, 2, 1);


        gridLayout->addWidget(groupBoxLight, 0, 6, 3, 1);

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


        gridLayout->addWidget(groupBoxView, 0, 5, 3, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 7, 1, 1);

        horizontalSlider_Slider = new QSlider(centralWidget);
        horizontalSlider_Slider->setObjectName(QString::fromUtf8("horizontalSlider_Slider"));
        horizontalSlider_Slider->setMaximum(10000);
        horizontalSlider_Slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_Slider, 2, 0, 1, 3);

        verticalSliderGaussianRadius = new QSlider(centralWidget);
        verticalSliderGaussianRadius->setObjectName(QString::fromUtf8("verticalSliderGaussianRadius"));
        verticalSliderGaussianRadius->setMinimum(1);
        verticalSliderGaussianRadius->setMaximum(15);
        verticalSliderGaussianRadius->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSliderGaussianRadius, 0, 7, 2, 1);

        widgetOpenGL = new WidgetOpenGL(centralWidget);
        widgetOpenGL->setObjectName(QString::fromUtf8("widgetOpenGL"));
        widgetOpenGL->setMinimumSize(QSize(200, 200));

        gridLayout->addWidget(widgetOpenGL, 0, 0, 2, 3);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBoxLight->setTitle(QCoreApplication::translate("MainWindow", "\305\232wiat\305\202o", nullptr));
        label_gamma->setText(QCoreApplication::translate("MainWindow", "2.20", nullptr));
        groupBoxView->setTitle(QCoreApplication::translate("MainWindow", "Widok", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Promie\305\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
