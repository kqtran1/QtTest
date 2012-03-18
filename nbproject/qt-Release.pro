# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-MacOSX
TARGET = QtExample
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
QT = core gui
SOURCES += MyCanvasPresenter.cpp ChangeTextEvent.cpp tests/SimpleTest.cpp MyApplicationPresenter.cpp main.cpp MyApplicationView.cpp mvp/View.cpp MyCanvasView.cpp Event.cpp mvp/EventHandler.cpp CanvasWidget.cpp mvp/EventBus.cpp MyApplication.cpp
HEADERS += mvp/Presenter.h MyApplication.h View.h MyCanvasView.h utils.h MyApplicationView.h MyApplicationPresenter.h mvp/Event.h MyCanvasPresenter.h ChangeTextEvent.h CanvasWidget.h mvp/EventHandler.h mvp/EventBus.h
FORMS +=
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Release/GNU-MacOSX
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
