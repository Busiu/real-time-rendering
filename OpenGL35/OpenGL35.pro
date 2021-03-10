#-------------------------------------------------
#
# Project created by QtCreator
#
#-------------------------------------------------

QT       += core gui widgets opengl

TARGET = OpenGL35
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
    fragment.glsl \
    vertex_shadow.glsl \
    fragment_shadow.glsl \
    geometry_shadow.glsl \
    vertex_hdr.glsl \
    fragment_hdr.glsl
