QT += core
QT -= gui

CONFIG += c++11

TARGET = calificando
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    personas.cpp \
    profesor.cpp \
    alumno.cpp

HEADERS += \
    personas.h \
    profesor.h \
    alumno.h
