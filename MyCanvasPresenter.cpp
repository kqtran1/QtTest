#include "MyCanvasPresenter.h"
#include "mvp/Event.h"

#include <Poco/NObserver.h>

MyCanvasPresenter::MyCanvasPresenter(MyCanvasView &view, Poco::NotificationCenter & notificationCenter):
Presenter<MyCanvasView>(view, notificationCenter) {
    Logger::logConstructor("MyCanvasPresenter");
    notificationCenter.addObserver(Poco::NObserver<MyCanvasPresenter, RunBondComputationNotification > (*this, &MyCanvasPresenter::handle));
}

MyCanvasPresenter::~MyCanvasPresenter() {
    Logger::logDestructor("MyCanvasPresenter");
}

void MyCanvasPresenter::handle(const Poco::AutoPtr<RunBondComputationNotification> & notification) {
    this->myView->setText(notification->text());
}