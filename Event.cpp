#include "Event.h"
#include "utils.h"

Event::Event() {
    Logger::logConstructor("Event");
}

Event::~Event() {
    Logger::logDestructor("Event");
}

