#include "MyCanvasPresenter.h"

#include "Event.h"

#include <Poco/NObserver.h>

MyCanvasPresenter::MyCanvasPresenter(boost::shared_ptr<MyCanvasView> view, Poco::NotificationCenter & notificationCenter):
Presenter<MyCanvasView>(view, notificationCenter) {
    Logger::logConstructor("MyCanvasPresenter");
    notificationCenter.addObserver(Poco::NObserver<MyCanvasPresenter, AddBondNotification > (*this, &MyCanvasPresenter::handle));
}

MyCanvasPresenter::~MyCanvasPresenter() {
    Logger::logDestructor("MyCanvasPresenter");
}

void MyCanvasPresenter::handle(const Poco::AutoPtr<AddBondNotification> & notification) {
    this->presenterView->addBondData(notification->bondData());
}