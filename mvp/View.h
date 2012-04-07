#ifndef VIEW_H
#define	VIEW_H

#include "utils.h"

#include <QtGui/QWidget>

#include <boost/utility.hpp>

class View : public boost::noncopyable {
public:
    View() { Logger::logConstructor("View"); };
    virtual ~View() { Logger::logDestructor("View"); };

    virtual const QWidget* container() const = 0;
};

#endif