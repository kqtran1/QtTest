#ifndef MYAPPLICATIONPRESENTER_H
#define	MYAPPLICATIONPRESENTER_H

#include "mvp/Presenter.h"
#include "BondView.h"
#include "services/BondPricerService.h"
#include "utils.h"

#include <QtGui/QLabel>

#include <Poco/NotificationCenter.h>

class MyApplicationPresenter : public Presenter<BondView> {
    Q_OBJECT
public:
    MyApplicationPresenter(BondView & view, 
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