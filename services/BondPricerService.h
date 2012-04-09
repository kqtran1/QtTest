#ifndef BONDPRICERSERVICE_H
#define	BONDPRICERSERVICE_H

#include "utils.h"

#include <ql/quantlib.hpp>

#include <boost/timer.hpp>
#include <boost/utility.hpp>
#include <vector>
#include <Poco/TaskManager.h>

struct BondData {
    QuantLib::Date issueDate;
    QuantLib::Date maturity;
    QuantLib::Real couponRate;
    QuantLib::Real marketQuote;
};

struct BondDataList {
    QuantLib::Date settlementDate;
    QuantLib::Integer fixingDays;
    QuantLib::Natural settlementDays;
    
    // ZC rates for the short end
    QuantLib::Rate zc3mQuote;
    QuantLib::Rate zc6mQuote;
    QuantLib::Rate zc1yQuote;
    
    // setup bonds
    QuantLib::Real redemption;
    QuantLib::Size numberOfBonds;
    
    std::vector<BondData> bondDatas;
};

struct BondPricingResult {
    
    boost::shared_ptr<QuantLib::ZeroCouponBond> zeroCouponBond;
    boost::shared_ptr<QuantLib::FixedRateBond> fixedRateBond;
    boost::shared_ptr<QuantLib::FloatingRateBond> floatingRateBond;
    int status;
    std::string message;
};

class BondPricerService : public boost::noncopyable {
public:
    BondPricerService();
    virtual ~BondPricerService();

    BondPricingResult run(const BondDataList & data);

private:
    Poco::TaskManager taskManager;
};



#endif