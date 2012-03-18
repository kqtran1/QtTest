#ifndef EVENTHANDLER_H
#define	EVENTHANDLER_H

#include "Event.h"
#include "utils.h"

class EventHandler {
public:
    EventHandler();
    virtual ~EventHandler();
    
    virtual void handle(const boost::shared_ptr<Event> event) =0;
private:

};


#endif