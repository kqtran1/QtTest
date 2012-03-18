#include "MyApplicationView.h"
#include "utils.h"
#include "MyApplication.h"

#include <QtGui/QLabel>

MyApplicationView::MyApplicationView() : 
        panel(new QDockWidget(QWidget::tr("MyApplicationView"))), 
        loginInput(new QLineEdit()) {
    Logger::logConstructor("MyApplicationView");
    
    QLabel *loginLabel = new QLabel("Login:");
    
    QLabel *passwordLabel = new QLabel("Password:");
    QLineEdit *passwordInput = new QLineEdit();
    
    // Memory Leak?
    QWidget *widget = new QWidget;
    QGridLayout *layout = new QGridLayout(widget);
    layout->addWidget(loginLabel, 0, 0, Qt::AlignLeft);
    layout->addWidget(loginInput, 0, 1, Qt::AlignRight);
    layout->addWidget(passwordLabel, 1, 0, Qt::AlignLeft);
    layout->addWidget(passwordInput, 1, 1, Qt::AlignRight);
    panel->setWidget(widget);
    
    panel->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
}

MyApplicationView::~MyApplicationView() {
    Logger::logDestructor("MyApplicationView");
    delete loginInput;
}

QWidget* MyApplicationView::container() const {
    return panel;
}

QDockWidget* MyApplicationView::dockContainer() const {
    return panel;
}

QLineEdit* MyApplicationView::getLoginInput() const {
    return loginInput;
}