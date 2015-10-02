#-------------------------------------------------
#
# Project created by QtCreator 2015-06-10T00:39:39
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

VERSION = 1.0
QMAKE_TARGET_COMPANY = FOR_YOTA
QMAKE_TARGET_PRODUCT = YHotKey
QMAKE_TARGET_DESCRIPTION = YHotKey
QMAKE_TARGET_COPYRIGHT =AKozitsin

TARGET = YHotKey
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    statisticdialog.cpp \
    dialog_hi_bye.cpp \
    for_sqlite.cpp

HEADERS  += mainwindow.h \
    statisticdialog.h \
    dialog_hi_bye.h \
    for_sqlite.h

FORMS    += mainwindow.ui \
    statisticdialog.ui \
    dialog_hi_bye.ui

RC_ICONS = favicon.ico

RESOURCES     = application.qrc
