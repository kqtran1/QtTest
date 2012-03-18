#include "MyCanvasPresenter.h"
#include "ChangeTextEvent.h"

typedef boost::shared_ptr<ChangeTextEvent> SharedChangedEvent;

MyCanvasPresenter::MyCanvasPresenter(MyCanvasView &view, EventBus &eventBus):
Presenter<MyCanvasView>(view, eventBus), EventHandler() {
    Logger::logConstructor("MyCanvasPresenter");
    eventBus.registerHandler("toto", this);
}

MyCanvasPresenter::~MyCanvasPresenter() {
    Logger::logDestructor("MyCanvasPresenter");
}

void MyCanvasPresenter::handle(const boost::shared_ptr<Event> event) {
    const boost::shared_ptr<ChangeTextEvent> textEvent = boost::static_pointer_cast<ChangeTextEvent>(event);
    this->myView->setText(textEvent->text());
}