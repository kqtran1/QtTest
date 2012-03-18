#ifndef EVENTBUS_H
#define	EVENTBUS_H

#include "EventHandler.h"
#include "Event.h"
#include "utils.h"

#include <map>

class EventBus {
public:
    EventBus();
    virtual ~EventBus();
    
    void registerHandler(const std::string &event, EventHandler *handler);
    void fireEvent(const std::string &eventName, const boost::shared_ptr<Event> event) const;
    
private:
    std::multimap<std::string, EventHandler *> handlersByEventType;
};

#endif

