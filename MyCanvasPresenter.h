#ifndef MYCANVASPRESENTER_H
#define	MYCANVASPRESENTER_H

#include "MyCanvasView.h"
#include "Presenter.h"
#include "EventHandler.h"
#include "ChangeTextEvent.h"
#include "Event.h"
#include "utils.h"

class MyCanvasPresenter : public Presenter<MyCanvasView>, public EventHandler {
public:
    MyCanvasPresenter(MyCanvasView &view, EventBus &eventBus);
    virtual ~MyCanvasPresenter();
    
    virtual void handle(const boost::shared_ptr<Event>);
    
private:

};

#endif