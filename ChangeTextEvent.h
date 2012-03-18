#ifndef CHANGETEXTEVENT_H
#define	CHANGETEXTEVENT_H

#include "Event.h"
#include "utils.h"

class ChangeTextEvent : public Event {
public:
    explicit ChangeTextEvent(const std::string text);
    virtual ~ChangeTextEvent();

    const std::string& text() const;

private:
    std::string newText;
};

#endif