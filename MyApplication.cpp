#include "MyApplication.h"
#include "BondView.h"
#include "MyApplicationPresenter.h"
#include "MyCanvasView.h"
#include "MyCanvasPresenter.h"
#include "utils.h"
#include "services/BondPricerService.h"

#include "BondForm.h"

#include <QtGui/QApplication>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QGridLayout>

#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QDockWidget>
#include <QtGui/QToolBar>

#include <Poco/NotificationCenter.h>

MyApplication::MyApplication() {
    Logger::logConstructor("MyApplication");
}

MyApplication::~MyApplication() {
    Logger::logDestructor("MyApplication");
}

int MyApplication::run(int argc, char *argv[]) {

    QApplication app(argc, argv);

    Poco::NotificationCenter notificationCenter;

    QMainWindow mainWindow;
    
    BondPricerService bondPricerService;

    BondView view;
    MyApplicationPresenter presenter(view, notificationCenter, bondPricerService);
    QDockWidget * bondDataDockWidget = new QDockWidget("Bond Data");
    bondDataDockWidget->setWidget(view.container());
    mainWindow.addDockWidget(Qt::LeftDockWidgetArea, bondDataDockWidget);

    MyCanvasView canvasView;
    MyCanvasPresenter canvasPresenter(canvasView, notificationCenter);
    QDockWidget * canvasDockWidget = new QDockWidget("My Canvas View");
    canvasDockWidget->setWidget(canvasView.container());
    mainWindow.addDockWidget(Qt::RightDockWidgetArea, canvasDockWidget);


    MyCanvasView canvasView2;
    MyCanvasPresenter canvasPresenter2(canvasView2, notificationCenter);
    QDockWidget * canvasDockWidget2 = new QDockWidget("My Canvas View");
    canvasDockWidget2->setWidget(canvasView2.container());
    mainWindow.setCentralWidget(canvasDockWidget2);

    mainWindow.show();

    return app.exec();
}