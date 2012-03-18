#ifndef VIEW_H
#define	VIEW_H

#include <QtGui/QWidget>

class View {
public:
    View();
    virtual ~View();

    virtual const QWidget* container() const = 0;
};

#endif