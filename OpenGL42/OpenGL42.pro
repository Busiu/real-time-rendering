#-------------------------------------------------
#
# Project created by QtCreator
#
#-------------------------------------------------

QT       += core gui widgets opengl

TARGET = OpenGL42
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
    vertex.glsl \
    readme.txt \
    tess_control.glsl \
    tess_eval.glsl
