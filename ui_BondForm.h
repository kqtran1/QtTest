/********************************************************************************
** Form generated from reading UI file 'BondForm.ui'
**
** Created: Sun Apr 1 14:13:44 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BONDFORM_H
#define UI_BONDFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BondForm
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *couponRateLabel;
    QLineEdit *CouponRateInput;
    QLabel *marketQuoteLabel;
    QLineEdit *marketQuoteInput;
    QLabel *maturityLabel;
    QDateEdit *maturityEdit;
    QLabel *issueDateLabel;
    QDateEdit *issueDateEdit;
    QPushButton *addButton;

    void setupUi(QWidget *BondForm)
    {
        if (BondForm->objectName().isEmpty())
            BondForm->setObjectName(QString::fromUtf8("BondForm"));
        BondForm->resize(279, 166);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BondForm->sizePolicy().hasHeightForWidth());
        BondForm->setSizePolicy(sizePolicy);
        formLayoutWidget = new QWidget(BondForm);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(-1, -1, 281, 178));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setContentsMargins(10, 10, 10, 10);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetMinimumSize);
        formLayout->setContentsMargins(0, 0, 0, 0);
        couponRateLabel = new QLabel(formLayoutWidget);
        couponRateLabel->setObjectName(QString::fromUtf8("couponRateLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, couponRateLabel);

        CouponRateInput = new QLineEdit(formLayoutWidget);
        CouponRateInput->setObjectName(QString::fromUtf8("CouponRateInput"));

        formLayout->setWidget(2, QFormLayout::FieldRole, CouponRateInput);

        marketQuoteLabel = new QLabel(formLayoutWidget);
        marketQuoteLabel->setObjectName(QString::fromUtf8("marketQuoteLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, marketQuoteLabel);

        marketQuoteInput = new QLineEdit(formLayoutWidget);
        marketQuoteInput->setObjectName(QString::fromUtf8("marketQuoteInput"));

        formLayout->setWidget(3, QFormLayout::FieldRole, marketQuoteInput);

        maturityLabel = new QLabel(formLayoutWidget);
        maturityLabel->setObjectName(QString::fromUtf8("maturityLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, maturityLabel);

        maturityEdit = new QDateEdit(formLayoutWidget);
        maturityEdit->setObjectName(QString::fromUtf8("maturityEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, maturityEdit);

        issueDateLabel = new QLabel(formLayoutWidget);
        issueDateLabel->setObjectName(QString::fromUtf8("issueDateLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, issueDateLabel);

        issueDateEdit = new QDateEdit(formLayoutWidget);
        issueDateEdit->setObjectName(QString::fromUtf8("issueDateEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, issueDateEdit);

        addButton = new QPushButton(formLayoutWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        formLayout->setWidget(4, QFormLayout::FieldRole, addButton);


        retranslateUi(BondForm);

        QMetaObject::connectSlotsByName(BondForm);
    } // setupUi

    void retranslateUi(QWidget *BondForm)
    {
        BondForm->setWindowTitle(QApplication::translate("BondForm", "BondForm", 0, QApplication::UnicodeUTF8));
        couponRateLabel->setText(QApplication::translate("BondForm", "Coupon Rate", 0, QApplication::UnicodeUTF8));
        CouponRateInput->setInputMask(QApplication::translate("BondForm", "0.00000; ", 0, QApplication::UnicodeUTF8));
        marketQuoteLabel->setText(QApplication::translate("BondForm", "Market Quote", 0, QApplication::UnicodeUTF8));
        marketQuoteInput->setInputMask(QApplication::translate("BondForm", "000.0000; ", 0, QApplication::UnicodeUTF8));
        maturityLabel->setText(QApplication::translate("BondForm", "Maturity", 0, QApplication::UnicodeUTF8));
        issueDateLabel->setText(QApplication::translate("BondForm", "Issue Date", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("BondForm", "Compute", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BondForm: public Ui_BondForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BONDFORM_H
