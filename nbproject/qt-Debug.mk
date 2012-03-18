#############################################################################
# Makefile for building: dist/Debug/GNU-MacOSX/QtExample
# Generated by qmake (2.01a) (Qt 4.8.0) on: Sun Mar 18 15:47:20 2012
# Project:  nbproject/qt-Debug.pro
# Template: app
# Command: /book/dev/QtSDK/Desktop/Qt/4.8.0/gcc/bin/qmake -spec ../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/macx-g++ VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB
CFLAGS        = -pipe -g -gdwarf-2 -arch x86_64 -Xarch_x86_64 -mmacosx-version-min=10.5 -Wall -W $(DEFINES)
CXXFLAGS      = -pipe -g -gdwarf-2 -arch x86_64 -Xarch_x86_64 -mmacosx-version-min=10.5 -Wall -W $(DEFINES)
INCPATH       = -I../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/macx-g++ -Inbproject -I../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/lib/QtCore.framework/Versions/4/Headers -I../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/include/QtCore -I../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/lib/QtGui.framework/Versions/4/Headers -I../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/include/QtGui -I../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/include -I../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/include -Inbproject -I../../../dev/boost_1_47_0 -I. -I. -F/book/dev/QtSDK/Desktop/Qt/4.8.0/gcc/lib
LINK          = g++
LFLAGS        = -headerpad_max_install_names -arch x86_64 -Xarch_x86_64 -mmacosx-version-min=10.5
LIBS          = $(SUBLIBS) -F/book/dev/QtSDK/Desktop/Qt/4.8.0/gcc/lib -L/book/dev/QtSDK/Desktop/Qt/4.8.0/gcc/lib -framework QtGui -framework QtCore 
AR            = ar cq
RANLIB        = ranlib -s
QMAKE         = /book/dev/QtSDK/Desktop/Qt/4.8.0/gcc/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
STRIP         = 
INSTALL_FILE  = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = $(COPY_FILE)
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
export MACOSX_DEPLOYMENT_TARGET = 10.4

####### Output directory

OBJECTS_DIR   = build/Debug/GNU-MacOSX/

####### Files

SOURCES       = MyCanvasPresenter.cpp \
		ChangeTextEvent.cpp \
		EventHandler.cpp \
		MyApplicationPresenter.cpp \
		main.cpp \
		MyApplicationView.cpp \
		EventBus.cpp \
		MyCanvasView.cpp \
		Event.cpp \
		View.cpp \
		CanvasWidget.cpp \
		MyApplication.cpp moc_MyApplicationPresenter.cpp
OBJECTS       = build/Debug/GNU-MacOSX/MyCanvasPresenter.o \
		build/Debug/GNU-MacOSX/ChangeTextEvent.o \
		build/Debug/GNU-MacOSX/EventHandler.o \
		build/Debug/GNU-MacOSX/MyApplicationPresenter.o \
		build/Debug/GNU-MacOSX/main.o \
		build/Debug/GNU-MacOSX/MyApplicationView.o \
		build/Debug/GNU-MacOSX/EventBus.o \
		build/Debug/GNU-MacOSX/MyCanvasView.o \
		build/Debug/GNU-MacOSX/Event.o \
		build/Debug/GNU-MacOSX/View.o \
		build/Debug/GNU-MacOSX/CanvasWidget.o \
		build/Debug/GNU-MacOSX/MyApplication.o \
		build/Debug/GNU-MacOSX/moc_MyApplicationPresenter.o
DIST          = ../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/unix.conf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/mac.conf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/gcc-base.conf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/gcc-base-macx.conf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/g++-base.conf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/g++-macx.conf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/qconfig.pri \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/modules/qt_webkit_version.pri \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/qt_functions.prf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/qt_config.prf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/exclusive_builds.prf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/default_pre.prf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/default_pre.prf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/dwarf2.prf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/debug.prf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/default_post.prf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/default_post.prf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/x86_64.prf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/objective_c.prf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/warn_on.prf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/qt.prf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/unix/thread.prf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/moc.prf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/rez.prf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/sdk.prf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/resources.prf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/uic.prf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/yacc.prf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/lex.prf \
		../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/include_source_dir.prf \
		nbproject/qt-Debug.pro
QMAKE_TARGET  = QtExample
DESTDIR       = dist/Debug/GNU-MacOSX/
TARGET        = dist/Debug/GNU-MacOSX/QtExample

####### Custom Compiler Variables
QMAKE_COMP_QMAKE_OBJECTIVE_CFLAGS = -pipe \
		-g \
		-arch \
		x86_64 \
		-Xarch_x86_64 \
		-mmacosx-version-min=10.5 \
		-Wall \
		-W


first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: qttmp-Debug.mk $(TARGET)

$(TARGET):  $(OBJECTS)  
	@$(CHK_DIR_EXISTS) dist/Debug/GNU-MacOSX/ || $(MKDIR) dist/Debug/GNU-MacOSX/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

qttmp-Debug.mk: nbproject/qt-Debug.pro  ../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/unix.conf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/mac.conf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/gcc-base.conf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/gcc-base-macx.conf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/g++-base.conf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/g++-macx.conf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/qconfig.pri \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/modules/qt_webkit_version.pri \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/qt_functions.prf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/qt_config.prf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/exclusive_builds.prf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/default_pre.prf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/default_pre.prf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/dwarf2.prf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/debug.prf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/default_post.prf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/default_post.prf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/x86_64.prf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/objective_c.prf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/warn_on.prf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/qt.prf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/unix/thread.prf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/moc.prf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/rez.prf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/sdk.prf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/resources.prf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/uic.prf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/yacc.prf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/lex.prf \
		../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/include_source_dir.prf
	$(QMAKE) -spec ../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/macx-g++ VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/unix.conf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/mac.conf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/gcc-base.conf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/gcc-base-macx.conf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/g++-base.conf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/g++-macx.conf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/qconfig.pri:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/modules/qt_webkit_version.pri:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/qt_functions.prf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/qt_config.prf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/exclusive_builds.prf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/default_pre.prf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/default_pre.prf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/dwarf2.prf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/debug.prf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/default_post.prf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/default_post.prf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/x86_64.prf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/objective_c.prf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/warn_on.prf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/qt.prf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/unix/thread.prf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/moc.prf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/rez.prf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/sdk.prf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/resources.prf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/uic.prf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/yacc.prf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/lex.prf:
../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/include_source_dir.prf:
qmake:  FORCE
	@$(QMAKE) -spec ../../../dev/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/macx-g++ VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro

dist: 
	@$(CHK_DIR_EXISTS) build/Debug/GNU-MacOSX/QtExample1.0.0 || $(MKDIR) build/Debug/GNU-MacOSX/QtExample1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) build/Debug/GNU-MacOSX/QtExample1.0.0/ && $(COPY_FILE) --parents MyApplication.h View.h MyCanvasView.h EventHandler.h utils.h MyApplicationView.h MyApplicationPresenter.h Presenter.h MyCanvasPresenter.h ChangeTextEvent.h EventBus.h CanvasWidget.h Event.h build/Debug/GNU-MacOSX/QtExample1.0.0/ && $(COPY_FILE) --parents MyCanvasPresenter.cpp ChangeTextEvent.cpp EventHandler.cpp MyApplicationPresenter.cpp main.cpp MyApplicationView.cpp EventBus.cpp MyCanvasView.cpp Event.cpp View.cpp CanvasWidget.cpp MyApplication.cpp build/Debug/GNU-MacOSX/QtExample1.0.0/ && (cd `dirname build/Debug/GNU-MacOSX/QtExample1.0.0` && $(TAR) QtExample1.0.0.tar QtExample1.0.0 && $(COMPRESS) QtExample1.0.0.tar) && $(MOVE) `dirname build/Debug/GNU-MacOSX/QtExample1.0.0`/QtExample1.0.0.tar.gz . && $(DEL_FILE) -r build/Debug/GNU-MacOSX/QtExample1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) qttmp-Debug.mk


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_objective_c_make_all:
compiler_objective_c_clean:
compiler_moc_header_make_all: moc_MyApplicationPresenter.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_MyApplicationPresenter.cpp
moc_MyApplicationPresenter.cpp: Presenter.h \
		View.h \
		EventBus.h \
		EventHandler.h \
		Event.h \
		utils.h \
		MyApplicationView.h \
		ChangeTextEvent.h \
		MyApplicationPresenter.h
	/book/dev/QtSDK/Desktop/Qt/4.8.0/gcc/bin/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ MyApplicationPresenter.h -o moc_MyApplicationPresenter.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_rez_source_make_all:
compiler_rez_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

build/Debug/GNU-MacOSX/MyCanvasPresenter.o: MyCanvasPresenter.cpp MyCanvasPresenter.h \
		MyCanvasView.h \
		View.h \
		utils.h \
		CanvasWidget.h \
		Presenter.h \
		EventBus.h \
		EventHandler.h \
		Event.h \
		ChangeTextEvent.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-MacOSX/MyCanvasPresenter.o MyCanvasPresenter.cpp

build/Debug/GNU-MacOSX/ChangeTextEvent.o: ChangeTextEvent.cpp ChangeTextEvent.h \
		Event.h \
		utils.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-MacOSX/ChangeTextEvent.o ChangeTextEvent.cpp

build/Debug/GNU-MacOSX/EventHandler.o: EventHandler.cpp EventHandler.h \
		Event.h \
		utils.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-MacOSX/EventHandler.o EventHandler.cpp

build/Debug/GNU-MacOSX/MyApplicationPresenter.o: MyApplicationPresenter.cpp MyApplicationPresenter.h \
		Presenter.h \
		View.h \
		EventBus.h \
		EventHandler.h \
		Event.h \
		utils.h \
		MyApplicationView.h \
		ChangeTextEvent.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-MacOSX/MyApplicationPresenter.o MyApplicationPresenter.cpp

build/Debug/GNU-MacOSX/main.o: main.cpp MyApplication.h \
		utils.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-MacOSX/main.o main.cpp

build/Debug/GNU-MacOSX/MyApplicationView.o: MyApplicationView.cpp MyApplicationView.h \
		View.h \
		utils.h \
		MyApplication.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-MacOSX/MyApplicationView.o MyApplicationView.cpp

build/Debug/GNU-MacOSX/EventBus.o: EventBus.cpp EventBus.h \
		EventHandler.h \
		Event.h \
		utils.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-MacOSX/EventBus.o EventBus.cpp

build/Debug/GNU-MacOSX/MyCanvasView.o: MyCanvasView.cpp MyCanvasView.h \
		View.h \
		utils.h \
		CanvasWidget.h \
		MyApplication.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-MacOSX/MyCanvasView.o MyCanvasView.cpp

build/Debug/GNU-MacOSX/Event.o: Event.cpp Event.h \
		utils.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-MacOSX/Event.o Event.cpp

build/Debug/GNU-MacOSX/View.o: View.cpp View.h \
		utils.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-MacOSX/View.o View.cpp

build/Debug/GNU-MacOSX/CanvasWidget.o: CanvasWidget.cpp CanvasWidget.h \
		utils.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-MacOSX/CanvasWidget.o CanvasWidget.cpp

build/Debug/GNU-MacOSX/MyApplication.o: MyApplication.cpp MyApplication.h \
		utils.h \
		MyApplicationView.h \
		View.h \
		MyApplicationPresenter.h \
		Presenter.h \
		EventBus.h \
		EventHandler.h \
		Event.h \
		ChangeTextEvent.h \
		MyCanvasView.h \
		CanvasWidget.h \
		MyCanvasPresenter.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-MacOSX/MyApplication.o MyApplication.cpp

build/Debug/GNU-MacOSX/moc_MyApplicationPresenter.o: moc_MyApplicationPresenter.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-MacOSX/moc_MyApplicationPresenter.o moc_MyApplicationPresenter.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

