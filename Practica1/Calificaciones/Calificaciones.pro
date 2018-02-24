QT += core
QT -= gui

CONFIG += c++11

TARGET = Calificaciones
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    alumno.cpp \
    persona.cpp \
    profesor.cpp

HEADERS += \
    alumno.h \
    persona.h \
    profesor.h
