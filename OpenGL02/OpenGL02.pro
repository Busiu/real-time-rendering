#-------------------------------------------------
#
# Project created by QtCreator 2015-09-12T13:02:30
#
#-------------------------------------------------

QT       += core gui widgets opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OpenGL02
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    widgetopengl.cpp

HEADERS  += mainwindow.h \
    widgetopengl.h

FORMS    += mainwindow.ui

DISTFILES += \
    readme.txt
