#ifndef MYCANVASPRESENTER_H
#define	MYCANVASPRESENTER_H

#include "MyCanvasView.h"
#include "mvp/Presenter.h"
#include "mvp/Event.h"
#include "utils.h"

#include <Poco/AutoPtr.h>
#include <Poco/NotificationCenter.h>

class MyCanvasPresenter : public Presenter<MyCanvasView> {
public:
    MyCanvasPresenter(MyCanvasView &view, Poco::NotificationCenter & notificationCenter);
    virtual ~MyCanvasPresenter();
    
    virtual void handle(const Poco::AutoPtr<RunBondComputationNotification> & notification);
    
private:

};

#endif