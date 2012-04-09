#ifndef MYAPPLICATIONPRESENTER_H
#define	MYAPPLICATIONPRESENTER_H

#include "BondView.h"
#include "services/BondPricerService.h"
#include "utils.h"

#include "mvp/Presenter.h"

#include <QtGui/QLabel>

#include <Poco/NotificationCenter.h>

class MyApplicationPresenter : public Presenter<BondView> {
    Q_OBJECT
public:
    MyApplicationPresenter(BondViewPtr view, 
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