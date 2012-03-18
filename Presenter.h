#ifndef PRESENTER_H
#define	PRESENTER_H

#include "View.h"
#include "EventBus.h"
#include "utils.h"

#include <QtCore/QObject>

template <class T>
class Presenter: public QObject {
    
protected:
    T *myView;
    EventBus &eventBus;
    
public:
    Presenter(T &view, EventBus &eventBus);
    virtual ~Presenter();
    
    const T & view() const;
    
private:

};

template <class T>
Presenter<T>::Presenter(T &view, EventBus &eventBus) : myView(&view), eventBus(eventBus) {
    Logger::logConstructor("Presenter");
}

template <class T>
Presenter<T>::~Presenter() {
    Logger::logDestructor("Presenter");
}

template <class T>
const T& Presenter<T>::view() const {
    return *myView;
}

#endif
