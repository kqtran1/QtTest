#include "MyApplication.h"
#include "MyApplicationView.h"
#include "MyApplicationPresenter.h"
#include "EventBus.h"
#include "MyCanvasView.h"
#include "MyCanvasPresenter.h"
#include "utils.h"

#include <QtGui/QApplication>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QGridLayout>

#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QDockWidget>
#include <QtGui/QToolBar>

MyApplication::MyApplication() {
    Logger::logConstructor("MyApplication");
}

MyApplication::~MyApplication() {
    Logger::logDestructor("MyApplication");
}

int MyApplication::run(int argc, char *argv[]) {

    QApplication app(argc, argv);

    EventBus eventBus;

    QMainWindow mainWindow;

    MyApplicationView view;
    MyApplicationPresenter presenter(view, eventBus);
    mainWindow.addDockWidget(Qt::LeftDockWidgetArea, view.dockContainer());

    MyCanvasView canvasView;
    MyCanvasPresenter canvasPresenter(canvasView, eventBus);
    mainWindow.addDockWidget(Qt::RightDockWidgetArea, canvasView.dockContainer());


    MyCanvasView canvasView2;
    MyCanvasPresenter canvasPresenter2(canvasView2, eventBus);
    mainWindow.setCentralWidget(canvasView2.dockContainer());

    mainWindow.show();

    return app.exec();
}