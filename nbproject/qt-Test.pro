# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Test/GNU-MacOSX
TARGET = QtExample
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
QT = core gui
SOURCES += BondForm.cpp MyCanvasPresenter.cpp services/BondPricerService.cpp MyApplicationPresenter.cpp MyCanvasView.cpp BondTableModel.cpp BondCalculationTask.cpp CanvasWidget.cpp BondComputationResultForm.cpp BondView.cpp MyApplication.cpp
HEADERS += mvp/Presenter.h services/BondPricerService.h MyApplication.h BondTableModel.h MyCanvasView.h utils.h BondComputationResultForm.h MyApplicationPresenter.h MyCanvasPresenter.h BondForm.h mvp/View.h CanvasWidget.h Event.h BondCalculationTask.h BondView.h
FORMS += BondForm.ui BondComputationResultForm.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Test/GNU-MacOSX
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += /book/dev/gtest-1.6.0/include /book/dev/QtSDK/Desktop/Qt/4.8.0/gcc/include /book/dev/boost_1_47_0 /book/dev/QuantLib-1.2 
LIBS += /book/dev/gtest-1.6.0/lib/libgtest.a /book/dev/gtest-1.6.0/lib/libgtest_main.a /book/dev/boost_1_47_0/stage/lib/libboost_chrono.a /book/dev/boost_1_47_0/stage/lib/libboost_thread.a /book/dev/boost_1_47_0/stage/lib/libboost_system.a -L/opt/local/lib/ -lQuantLib  
