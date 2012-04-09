#include "MyApplicationPresenter.h"
#include "Event.h"
#include "utils.h"

#include <boost/lexical_cast.hpp>
#include <boost/bind.hpp>

#include <QtCore/QObject>

MyApplicationPresenter::MyApplicationPresenter(boost::shared_ptr<BondView> view,
        Poco::NotificationCenter & notificationCenter,
        BondPricerService & bondPricerService) :
Presenter<BondView>(view, notificationCenter),
notificationCenter(notificationCenter),
bondPricerService(bondPricerService) {
    Logger::logConstructor("MyApplicationPresenter");

    QObject::connect(view->getCouponRateInput(), SIGNAL(returnPressed()), this, SLOT(logNothing()));

}

MyApplicationPresenter::~MyApplicationPresenter() {
    Logger::logDestructor("MyApplicationPresenter");
}

void MyApplicationPresenter::log(std::string msg) const {
    std::cout << msg << std::endl;
}

void MyApplicationPresenter::logNothing() {
    BondDataList data;

    data.fixingDays = 3;
    data.settlementDays = 3;
    data.settlementDate = QuantLib::Date(18, QuantLib::September, 2008);
    data.zc3mQuote = 0.0096;
    data.zc6mQuote = 0.0145;
    data.zc1yQuote = 0.0194;

    data.redemption = 100.0;
    data.numberOfBonds = 1;

    /*BondData bondData_1;
    bondData_1.issueDate = QuantLib::Date(15, QuantLib::March, 2005);
    bondData_1.maturity = QuantLib::Date(31, QuantLib::August, 2010);
    bondData_1.couponRate = 0.02375;
    bondData_1.marketQuote = 100.390625;
    data.bondDatas.push_back(bondData_1);

    BondData bondData_2;
    bondData_2.issueDate = QuantLib::Date(15, QuantLib::June, 2005);
    bondData_2.maturity = QuantLib::Date(31, QuantLib::August, 2011);
    bondData_2.couponRate = 0.04625;
    bondData_2.marketQuote = 106.21875;
    data.bondDatas.push_back(bondData_2);

    BondData bondData_3;
    bondData_3.issueDate = QuantLib::Date(30, QuantLib::June, 2006);
    bondData_3.maturity = QuantLib::Date(31, QuantLib::August, 2013);
    bondData_3.couponRate = 0.03125;
    bondData_3.marketQuote = 100.59375;
    data.bondDatas.push_back(bondData_3);

    BondData bondData_4;
    bondData_4.issueDate = QuantLib::Date(15, QuantLib::November, 2002);
    bondData_4.maturity = QuantLib::Date(15, QuantLib::August, 2018);
    bondData_4.couponRate = 0.04000;
    bondData_4.marketQuote = 101.6875;
    data.bondDatas.push_back(bondData_4);*/

    BondData bondData_5;
    bondData_5.issueDate = QuantLib::Date(15, QuantLib::May, 1987);
    bondData_5.maturity = QuantLib::Date(15, QuantLib::May, 2038);
    bondData_5.couponRate = 0.04500;
    bondData_5.marketQuote = 102.140625;
    data.bondDatas.push_back(bondData_5);
    
    bondPricerService.run(data);

    notificationCenter.postNotification(new AddBondNotification(bondData_5));
}