#include "BondView.h"
#include "MyApplication.h"
#include "utils.h"

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

QLineEdit* BondView::couponRateInput() const {
    return bondForm->widget.couponRateInput;
}

QLineEdit* BondView::marketQuoteInput() const {
    return bondForm->widget.marketQuoteInput;
}

QDateEdit* BondView::issueDateEdit() const {
    return bondForm->widget.issueDateEdit;
}

QDateEdit* BondView::maturityDateEdit() const {
    return bondForm->widget.maturityEdit;
}