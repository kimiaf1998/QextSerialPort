#-------------------------------------------------
#
# Project created by QtCreator 2018-07-25T10:20:29
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = SerialPort
CONFIG   += console
CONFIG   -= app_bundle

CONFIG += extserialport
TEMPLATE = app


LIBS += `pkg-config opencv --libs`
SOURCES += main.cpp


include(/home/kimia/qextserialport-master/src/qextserialport.pri)
