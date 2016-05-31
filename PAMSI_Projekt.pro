#-------------------------------------------------
#
# Project created by QtCreator 2016-05-27T01:06:19
#
#-------------------------------------------------

CONFIG += c++11

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PAMSI_Projekt
TEMPLATE = app


SOURCES += Src/Gui/mainwindow.cpp \
           Src/main.cpp \
    Src/AStar/PAMSI.cpp \
    Src/AStar/astar.cpp \
    Src/AStar/graph.cpp \
    Src/AStar/stack.cpp

HEADERS  += Inc/Gui/mainwindow.h \
    Inc/Gui/stops_name.h \
    Inc/stops_name.h \
    Inc/AStar/astar.h \
    Inc/AStar/graph.h \
    Inc/AStar/stack.h \
    Inc/AStar/igraph.h \
    Inc/AStar/element.h
