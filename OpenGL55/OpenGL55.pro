#-------------------------------------------------
#
# Project created by QtCreator
#
#-------------------------------------------------

QT       += core gui widgets opengl

TARGET = OpenGL55
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    widgetopengl.cpp \
    model.cpp

HEADERS  += mainwindow.h \
    widgetopengl.h \
    model.h

FORMS    += mainwindow.ui

DISTFILES += \
    fragment.glsl \
    readme.txt \
    vertex.glsl
