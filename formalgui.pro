#-------------------------------------------------
#
# Project created by QtCreator 2014-01-08T15:49:54
#
#-------------------------------------------------



QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = formalgui
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    generator.cpp

HEADERS  += mainwindow.h \
    generator.h

FORMS    += mainwindow.ui

RESOURCES += \
    formal.qrc
