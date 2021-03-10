#-------------------------------------------------
#
# Project created by QtCreator 2015-09-12T13:02:30
#
#-------------------------------------------------

QT       += core gui widgets opengl

TARGET = OpenGL12
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
    readme.txt \
    vertex.glsl \
    fragment.glsl
