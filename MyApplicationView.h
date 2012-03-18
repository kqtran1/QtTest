#ifndef MYAPPLICATIONVIEW_H
#define	MYAPPLICATIONVIEW_H

#include "View.h"

#include <QtGui/QWidget>
#include <QtGui/QGridLayout>
#include <QtGui/QLineEdit>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QDockWidget>

class MyApplicationView : public View {
    
public:
    MyApplicationView();
    virtual ~MyApplicationView();
    
    virtual QWidget* container() const;
    QDockWidget* dockContainer() const;
    QLineEdit* getLoginInput() const;
    
private:
    QDockWidget *panel;
    QLineEdit *loginInput;
};

#endif

