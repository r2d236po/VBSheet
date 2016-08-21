#-------------------------------------------------
#
# Project created by QtCreator 2015-10-15T14:11:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VBsheet
TEMPLATE = app


SOURCES += main.cpp\
    match.cpp \
    team.cpp \
    joueur.cpp \
    person.cpp \
    referee.cpp \
    mainwindow.cpp \
    prematch.cpp \
    teamlistv2.cpp

HEADERS  += match.h \
    team.h \
    joueur.h \
    person.h \
    referee.h \
    mainwindow.h \
    prematch.h \
    teamlistv2.h

FORMS    += mainwindow.ui \
    prematch.ui \
    teamlistv2.ui

DISTFILES +=
