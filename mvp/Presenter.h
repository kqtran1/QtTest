#ifndef PRESENTER_H
#define	PRESENTER_H

#include "View.h"
#include "utils.h"

#include <QtCore/QObject>

#include <Poco/NotificationCenter.h>

template <class T>
class Presenter: public QObject {    
public:
    Presenter(T &view, Poco::NotificationCenter & notificationCenter);
    virtual ~Presenter();
    
    const T & view() const;

protected:
    T *myView;
    Poco::NotificationCenter & notificationCenter;
};

template <class T>
Presenter<T>::Presenter(T &view, Poco::NotificationCenter & notificationCenter) : myView(&view), notificationCenter(notificationCenter) {
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
