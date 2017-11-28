#-------------------------------------------------
#
# Project created by QtCreator 2017-11-24T20:10:08
#
#-------------------------------------------------

QT       += core gui charts
CONFIG   += C++14

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sysInfo
TEMPLATE = app

SOURCES += main.cpp\
    MainWindow.cpp \
    SysInfo.cpp \
    SysInfoWidget.cpp \
    CpuWidget.cpp

HEADERS  += MainWindow.h \
    SysInfo.h \
    SysInfoWidget.h \
    CpuWidget.h

windows {
    SOURCES += SysInfoWindowsImpl.cpp
    HEADERS += SysInfoWindowsImpl.h
}

linux {
    SOURCES += SysInfoLinuxImpl.cpp
    HEADERS += SysInfoLinuxImpl.h
}

FORMS    += MainWindow.ui
