#-------------------------------------------------
#
# Project created by QtCreator
#
#-------------------------------------------------

QT       += core gui widgets opengl

TARGET = OpenGL39
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
    gbuffer_fragment.glsl \
    gbuffer_vertex.glsl \
    shading_fragment.glsl \
    shading_vertex.glsl \
    ssao_vertex.glsl \
    ssao_fragment.glsl
