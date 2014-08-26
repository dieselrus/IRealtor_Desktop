#-------------------------------------------------
#
# Project created by QtCreator 2014-08-18T13:13:50
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IRealtor_Desktop
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    realtyobject.cpp \
    settings.cpp \
    exportxls.cpp \
    dialogadd.cpp \
    importkladr.cpp

HEADERS  += mainwindow.h \
    realtyobject.h \
    settings.h \
    exportxls.h \
    dialogadd.h \
    importkladr.h

FORMS    += mainwindow.ui \
    realtyobject.ui \
    settings.ui \
    exportxls.ui \
    dialogadd.ui \
    importkladr.ui

RESOURCES += \
    res.qrc
