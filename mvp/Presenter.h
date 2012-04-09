#ifndef PRESENTER_H
#define	PRESENTER_H

#include "View.h"
#include "utils.h"

#include <QtCore/QObject>

#include <Poco/NotificationCenter.h>
#include <boost/shared_ptr.hpp>
#include <boost/utility.hpp>

template <class T>
class Presenter: public QObject, public boost::noncopyable {    
public:
    Presenter(boost::shared_ptr<T> view, Poco::NotificationCenter & notificationCenter);
    virtual ~Presenter();
    
    const boost::shared_ptr<T> view() const;

protected:
    boost::shared_ptr<T> presenterView;
    Poco::NotificationCenter & notificationCenter;
};

template <class T>
Presenter<T>::Presenter(boost::shared_ptr<T> view, Poco::NotificationCenter & notificationCenter) : presenterView(view), notificationCenter(notificationCenter) {
    Logger::logConstructor("Presenter");
}

template <class T>
Presenter<T>::~Presenter() {
    Logger::logDestructor("Presenter");
}

template <class T>
const boost::shared_ptr<T> Presenter<T>::view() const {
    return presenterView;
}

#endif
