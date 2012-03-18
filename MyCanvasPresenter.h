#ifndef MYCANVASPRESENTER_H
#define	MYCANVASPRESENTER_H

#include "MyCanvasView.h"
#include "mvp/Presenter.h"
#include "mvp/EventHandler.h"
#include "ChangeTextEvent.h"
#include "mvp/Event.h"
#include "utils.h"

class MyCanvasPresenter : public Presenter<MyCanvasView>, public EventHandler {
public:
    MyCanvasPresenter(MyCanvasView &view, EventBus &eventBus);
    virtual ~MyCanvasPresenter();
    
    virtual void handle(const boost::shared_ptr<Event>);
    
private:

};

#endif