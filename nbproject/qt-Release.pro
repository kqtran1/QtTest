# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-MacOSX
TARGET = QtExample
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
QT = core gui
SOURCES += BondForm.cpp MyCanvasPresenter.cpp services/BondPricerService.cpp MyApplicationPresenter.cpp main.cpp MyCanvasView.cpp mvp/View.cpp CanvasWidget.cpp BondComputationResultForm.cpp BondView.cpp MyApplication.cpp
HEADERS += mvp/Presenter.h services/BondPricerService.h MyApplication.h View.h MyCanvasView.h utils.h BondComputationResultForm.h MyApplicationPresenter.h mvp/Event.h UnCopyable.h MyCanvasPresenter.h BondForm.h ChangeTextEvent.h CanvasWidget.h BondView.h
FORMS += BondForm.ui BondComputationResultForm.ui
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
