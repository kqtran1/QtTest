#ifndef EVENT_H
#define	EVENT_H

#include "services/BondPricerService.h"
#include "utils.h"

#include <Poco/Notification.h>

class RunBondComputationNotification : public Poco::Notification {
public:

    RunBondComputationNotification(std::string compText) : compText(compText) {
        Logger::logConstructor("RunBondComputationNotification");
    };

    ~RunBondComputationNotification() {
        Logger::logDestructor("RunBondComputationNotification");
    }

    std::string text() const {
        return compText;
    };

private:
    std::string compText;
    ;
};

class AddBondNotification : public Poco::Notification {
public:

    AddBondNotification(BondData bondData) : newBondData(bondData) {
        Logger::logConstructor("AddBondNotification");
    };

    ~AddBondNotification() {
        Logger::logDestructor("AddBondNotification");
    }

    BondData bondData() const {
        return newBondData;
    };

private:
    BondData newBondData;
};

#endif