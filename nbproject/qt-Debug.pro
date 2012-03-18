# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-MacOSX
TARGET = QtExample
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
QT = core gui
SOURCES += MyCanvasPresenter.cpp ChangeTextEvent.cpp EventHandler.cpp MyApplicationPresenter.cpp main.cpp MyApplicationView.cpp EventBus.cpp MyCanvasView.cpp Event.cpp View.cpp CanvasWidget.cpp MyApplication.cpp
HEADERS += MyApplication.h View.h MyCanvasView.h EventHandler.h utils.h MyApplicationView.h MyApplicationPresenter.h Presenter.h MyCanvasPresenter.h ChangeTextEvent.h EventBus.h CanvasWidget.h Event.h
FORMS +=
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-MacOSX
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += /book/dev/QtSDK/Desktop/Qt/4.8.0/gcc/include . /book/dev/boost_1_47_0 
LIBS += 
