/********************************************************************************
** Form generated from reading UI file 'BondComputationResultForm.ui'
**
** Created: Fri Apr 6 23:45:35 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BONDCOMPUTATIONRESULTFORM_H
#define UI_BONDCOMPUTATIONRESULTFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BondComputationResultForm
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;

    void setupUi(QWidget *BondComputationResultForm)
    {
        if (BondComputationResultForm->objectName().isEmpty())
            BondComputationResultForm->setObjectName(QString::fromUtf8("BondComputationResultForm"));
        BondComputationResultForm->resize(400, 300);
        verticalLayoutWidget = new QWidget(BondComputationResultForm);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 401, 301));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(verticalLayoutWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);


        retranslateUi(BondComputationResultForm);

        QMetaObject::connectSlotsByName(BondComputationResultForm);
    } // setupUi

    void retranslateUi(QWidget *BondComputationResultForm)
    {
        BondComputationResultForm->setWindowTitle(QApplication::translate("BondComputationResultForm", "BondComputationResultForm", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BondComputationResultForm: public Ui_BondComputationResultForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BONDCOMPUTATIONRESULTFORM_H
