#ifndef MYAPPLICATIONPRESENTER_H
#define	MYAPPLICATIONPRESENTER_H

#include "mvp/Presenter.h"
#include "MyApplicationView.h"
#include "services/BondPricerService.h"
#include "utils.h"

#include <QtGui/QLabel>

#include <Poco/NotificationCenter.h>

class BaseNotification: public Poco::Notification 
{
};

class MyApplicationPresenter : public Presenter<MyApplicationView> {
    Q_OBJECT
public:
    MyApplicationPresenter(MyApplicationView & view, 
            Poco::NotificationCenter & notificationCenter,
            BondPricerService & bondPricerService);
    
    virtual ~MyApplicationPresenter();

    void log(std::string msg) const;

public slots:
    void logNothing();

private:
    BondPricerService & bondPricerService;
    Poco::NotificationCenter & notificationCenter;
};

#endif