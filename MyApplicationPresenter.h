#ifndef MYAPPLICATIONPRESENTER_H
#define	MYAPPLICATIONPRESENTER_H

#include "Presenter.h"
#include "MyApplicationView.h"
#include "EventHandler.h"
#include "ChangeTextEvent.h"
#include "utils.h"

#include <QtGui/QLabel>

class MyApplicationPresenter : public Presenter<MyApplicationView>, public EventHandler {
    Q_OBJECT
public:
    MyApplicationPresenter(MyApplicationView &view, EventBus &eventBus);
    virtual ~MyApplicationPresenter();

    void log(std::string msg) const;
    
    virtual void handle(const boost::shared_ptr<Event>);

public slots:
    void logNothing();

};

#endif