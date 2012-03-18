#include "ChangeTextEvent.h"

ChangeTextEvent::ChangeTextEvent(const std::string text): newText(text) {
    Logger::logConstructor("ChangeTextEvent");
}

ChangeTextEvent::~ChangeTextEvent() {
    Logger::logDestructor("ChangeTextEvent");
}

const std::string& ChangeTextEvent::text() const {
    return newText;
}

