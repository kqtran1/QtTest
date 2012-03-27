#ifndef EVENT_H
#define	EVENT_H

#include "utils.h"

#include <Poco/Notification.h>

class RunBondComputationNotification : public Poco::Notification 
{
public:
    RunBondComputationNotification(std::string compText):compText(compText) {
        Logger::logConstructor("RunBondComputationNotification");
    };
    
    ~RunBondComputationNotification() {
        Logger::logDestructor("RunBondComputationNotification");
    }
    
    std::string text() const {
        return compText;
    };
    
private:
    std::string compText;;
};

#endif