#ifndef _BONDFORM_H
#define	_BONDFORM_H

#include "ui_BondForm.h"

class BondForm : public QWidget {
    Q_OBJECT
public:
    BondForm();
    virtual ~BondForm();
    
    Ui::BondForm widget;
};

#endif