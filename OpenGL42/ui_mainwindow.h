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
    QGroupBox *groupBoxView;
    QHBoxLayout *horizontalLayout;
    QSlider *verticalSliderRotX;
    QSlider *verticalSliderRotZ;
    QSlider *verticalSliderRotY;
    QSpacerItem *horizontalSpacer;
    QSlider *verticalSliderZoom;
    WidgetOpenGL *widgetOpenGL;
    QGroupBox *groupBoxTess;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSlider *verticalSliderOuter1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSlider *verticalSliderInner;
    QSlider *verticalSliderOuter2;
    QSlider *verticalSliderOuter0;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(694, 595);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
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


        gridLayout->addWidget(groupBoxView, 0, 1, 1, 1);

        widgetOpenGL = new WidgetOpenGL(centralWidget);
        widgetOpenGL->setObjectName(QString::fromUtf8("widgetOpenGL"));
        widgetOpenGL->setMinimumSize(QSize(200, 200));

        gridLayout->addWidget(widgetOpenGL, 0, 0, 1, 1);

        groupBoxTess = new QGroupBox(centralWidget);
        groupBoxTess->setObjectName(QString::fromUtf8("groupBoxTess"));
        sizePolicy.setHeightForWidth(groupBoxTess->sizePolicy().hasHeightForWidth());
        groupBoxTess->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBoxTess);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBoxTess);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        verticalSliderOuter1 = new QSlider(groupBoxTess);
        verticalSliderOuter1->setObjectName(QString::fromUtf8("verticalSliderOuter1"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(verticalSliderOuter1->sizePolicy().hasHeightForWidth());
        verticalSliderOuter1->setSizePolicy(sizePolicy2);
        verticalSliderOuter1->setMinimum(1);
        verticalSliderOuter1->setMaximum(20);
        verticalSliderOuter1->setValue(4);
        verticalSliderOuter1->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSliderOuter1, 0, 2, 1, 1);

        label_2 = new QLabel(groupBoxTess);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 1, 1, 1, 1);

        label_3 = new QLabel(groupBoxTess);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 1, 2, 1, 1);

        label_4 = new QLabel(groupBoxTess);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 1, 3, 1, 1);

        verticalSliderInner = new QSlider(groupBoxTess);
        verticalSliderInner->setObjectName(QString::fromUtf8("verticalSliderInner"));
        sizePolicy2.setHeightForWidth(verticalSliderInner->sizePolicy().hasHeightForWidth());
        verticalSliderInner->setSizePolicy(sizePolicy2);
        verticalSliderInner->setMinimum(1);
        verticalSliderInner->setMaximum(20);
        verticalSliderInner->setValue(4);
        verticalSliderInner->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSliderInner, 0, 0, 1, 1);

        verticalSliderOuter2 = new QSlider(groupBoxTess);
        verticalSliderOuter2->setObjectName(QString::fromUtf8("verticalSliderOuter2"));
        sizePolicy2.setHeightForWidth(verticalSliderOuter2->sizePolicy().hasHeightForWidth());
        verticalSliderOuter2->setSizePolicy(sizePolicy2);
        verticalSliderOuter2->setMinimum(1);
        verticalSliderOuter2->setMaximum(20);
        verticalSliderOuter2->setValue(4);
        verticalSliderOuter2->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSliderOuter2, 0, 3, 1, 1);

        verticalSliderOuter0 = new QSlider(groupBoxTess);
        verticalSliderOuter0->setObjectName(QString::fromUtf8("verticalSliderOuter0"));
        sizePolicy2.setHeightForWidth(verticalSliderOuter0->sizePolicy().hasHeightForWidth());
        verticalSliderOuter0->setSizePolicy(sizePolicy2);
        verticalSliderOuter0->setMinimum(1);
        verticalSliderOuter0->setMaximum(20);
        verticalSliderOuter0->setValue(4);
        verticalSliderOuter0->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSliderOuter0, 0, 1, 1, 1);

        label_5 = new QLabel(groupBoxTess);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        label_6 = new QLabel(groupBoxTess);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 2, 1, 1, 1);

        label_7 = new QLabel(groupBoxTess);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 2, 2, 1, 1);

        label_8 = new QLabel(groupBoxTess);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 2, 3, 1, 1);


        gridLayout->addWidget(groupBoxTess, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 694, 29));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);
        QObject::connect(verticalSliderInner, SIGNAL(valueChanged(int)), label, SLOT(setNum(int)));
        QObject::connect(verticalSliderOuter0, SIGNAL(valueChanged(int)), label_2, SLOT(setNum(int)));
        QObject::connect(verticalSliderOuter1, SIGNAL(valueChanged(int)), label_3, SLOT(setNum(int)));
        QObject::connect(verticalSliderOuter2, SIGNAL(valueChanged(int)), label_4, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBoxView->setTitle(QCoreApplication::translate("MainWindow", "widok", nullptr));
        groupBoxTess->setTitle(QCoreApplication::translate("MainWindow", "tesselacja", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "in[0]", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "out[0]", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "out[1]", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "out[2]", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
