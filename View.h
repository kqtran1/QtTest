#ifndef VIEW_H
#define	VIEW_H

#include "UnCopyable.h"

#include <QtGui/QWidget>

class View : public UnCopyable {
public:
    View();
    virtual ~View();

    virtual const QWidget* container() const = 0;
};

#endif