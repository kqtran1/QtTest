#include "EventBus.h"

EventBus::EventBus() {
    Logger::logConstructor("EventBus");
}

EventBus::~EventBus() {
    Logger::logDestructor("EventBus");
}

void EventBus::registerHandler(const std::string &event, EventHandler *handler) {
    handlersByEventType.insert(std::pair<std::string, EventHandler *>(event, handler));
}

void EventBus::fireEvent(const std::string &eventName, const boost::shared_ptr<Event> event) const {
    std::multimap<std::string, EventHandler*>::const_iterator it = handlersByEventType.find(eventName);
    for (; it != handlersByEventType.upper_bound(eventName); it++) {
        it->second->handle(event);
    }
}