#-------------------------------------------------
#
# Project created by QtCreator
#
#-------------------------------------------------

QT       += core gui widgets opengl

TARGET = OpenGL41
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    widgetopengl.cpp \
    model.cpp

HEADERS  += mainwindow.h \
    widgetopengl.h \
    model.h \
    light.h \
    material.h

FORMS    += mainwindow.ui

DISTFILES += \
    readme.txt \
    vertex.glsl \
    inst_fragment.glsl \
    inst_vertex.glsl \
    light_fragment.glsl \
    light_vertex.glsl
