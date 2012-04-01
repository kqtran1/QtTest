/* 
 * File:   BondComputationResultForm.h
 * Author: rastakiki
 *
 * Created on March 31, 2012, 5:15 PM
 */

#ifndef _BONDCOMPUTATIONRESULTFORM_H
#define	_BONDCOMPUTATIONRESULTFORM_H

#include "ui_BondComputationResultForm.h"

class BondComputationResultForm : public QWidget {
    Q_OBJECT
public:
    BondComputationResultForm();
    virtual ~BondComputationResultForm();
private:
    Ui::BondComputationResultForm widget;
};

#endif	/* _BONDCOMPUTATIONRESULTFORM_H */
