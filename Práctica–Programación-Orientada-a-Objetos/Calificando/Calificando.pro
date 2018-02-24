QT += core
QT -= gui

CONFIG += c++11

TARGET = Calificando
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    personalescuela.cpp \
    alumno.cpp \
    profesor.cpp

HEADERS += \
    personalescuela.h \
    alumno.h \
    profesor.h
