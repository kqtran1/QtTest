#include "MyApplicationView.h"
#include "utils.h"
#include "MyApplication.h"

#include <QtGui/QLabel>

MyApplicationView::MyApplicationView() : 
        panel(new QDockWidget(QWidget::tr("MyApplicationView"))), 
        couponRateInput(new QLineEdit()) {
    Logger::logConstructor("MyApplicationView");
    
    QLabel *couponRateLabel = new QLabel("Coupon Rate:");
    couponRateInput->setInputMask("0.00000");
    couponRateInput->setMaxLength(7);
    
    QLabel *passwordLabel = new QLabel("Market Quote:");
    QLineEdit *passwordInput = new QLineEdit();
    passwordInput->setInputMask("000.0000");
    passwordInput->setMaxLength(8);
    
    // Memory Leak?
    QWidget *widget = new QWidget;
    QGridLayout *layout = new QGridLayout(widget);
    layout->addWidget(couponRateLabel, 0, 0, Qt::AlignLeft);
    layout->addWidget(couponRateInput, 0, 1, Qt::AlignRight);
    layout->addWidget(passwordLabel, 1, 0, Qt::AlignLeft);
    layout->addWidget(passwordInput, 1, 1, Qt::AlignRight);
    panel->setWidget(widget);
    
    panel->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
}

MyApplicationView::~MyApplicationView() {
    Logger::logDestructor("MyApplicationView");
    delete couponRateInput;
}

QWidget* MyApplicationView::container() const {
    return panel;
}

QDockWidget* MyApplicationView::dockContainer() const {
    return panel;
}

QLineEdit* MyApplicationView::getCouponRateInput() const {
    return couponRateInput;
}