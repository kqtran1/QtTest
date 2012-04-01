#include "BondView.h"
#include "utils.h"
#include "MyApplication.h"

#include <QtGui/QLabel>

BondView::BondView() :
        bondForm(new BondForm()) {
    Logger::logConstructor("MyApplicationView");
}

BondView::~BondView() {
    Logger::logDestructor("MyApplicationView");
}

QWidget* BondView::container() const {
    return bondForm;
}

QLineEdit* BondView::getCouponRateInput() const {
    return bondForm->widget.CouponRateInput;
}