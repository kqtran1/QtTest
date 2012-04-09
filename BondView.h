#ifndef MYAPPLICATIONVIEW_H
#define	MYAPPLICATIONVIEW_H

#include "BondForm.h"

#include "mvp/View.h"

#include <QtGui/QWidget>
#include <QtGui/QGridLayout>
#include <QtGui/QLineEdit>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>

#include <boost/shared_ptr.hpp>

class BondView : public View {
public:
    BondView();
    virtual ~BondView();

    virtual QWidget* container() const;
    QLineEdit* getCouponRateInput() const;



private:
    BondForm * bondForm;
};

typedef boost::shared_ptr<BondView> BondViewPtr;

#endif

