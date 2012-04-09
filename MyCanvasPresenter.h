#ifndef MYCANVASPRESENTER_H
#define	MYCANVASPRESENTER_H

#include "Event.h"
#include "MyCanvasView.h"
#include "mvp/Presenter.h"
#include "utils.h"

#include <Poco/AutoPtr.h>
#include <Poco/NotificationCenter.h>

class MyCanvasPresenter : public Presenter<MyCanvasView> {
public:
    MyCanvasPresenter(MyCanvasViewPtr view, Poco::NotificationCenter & notificationCenter);
    virtual ~MyCanvasPresenter();
    
    virtual void handle(const Poco::AutoPtr<AddBondNotification> & notification);
    
private:

};

#endif