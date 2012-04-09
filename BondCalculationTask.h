#ifndef BONDCALCULATIONTASK_H
#define	BONDCALCULATIONTASK_H

#include "services/BondPricerService.h"

#include <Poco/Task.h>
#include <Poco/TaskManager.h>
#include <Poco/TaskNotification.h>
#include <Poco/Observer.h>
#include <boost/utility.hpp>

class BondCalculationTask : public boost::noncopyable, public Poco::Task {
public:
    BondCalculationTask(const BondDataList & bondDataList, const std::string& name);
    virtual ~BondCalculationTask();

    virtual void runTask();

private:
    BondDataList data;

};

#endif