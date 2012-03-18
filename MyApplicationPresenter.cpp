#include "MyApplicationPresenter.h"
#include "utils.h"

#include <QtCore/QObject>

MyApplicationPresenter::MyApplicationPresenter(MyApplicationView &view, EventBus &eventBus) :
Presenter<MyApplicationView>(view, eventBus), EventHandler() {
    Logger::logConstructor("MyApplicationPresenter");

    QObject::connect(view.getLoginInput(), SIGNAL(returnPressed()), this, SLOT(logNothing()));

    eventBus.registerHandler("toto", this);

}

MyApplicationPresenter::~MyApplicationPresenter() {
    Logger::logDestructor("MyApplicationPresenter");
}

void MyApplicationPresenter::log(std::string msg) const {
    std::cout << msg << std::endl;
}

void MyApplicationPresenter::logNothing() {
    QString text = myView->getLoginInput()->text();

    boost::shared_ptr<Event> event(new ChangeTextEvent(text.toStdString()));
    eventBus.fireEvent("toto", event);
}

void MyApplicationPresenter::handle(const boost::shared_ptr<Event>) {

}