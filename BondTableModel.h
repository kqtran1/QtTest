#ifndef BONDTABLEMODEL_H
#define	BONDTABLEMODEL_H

#include "services/BondPricerService.h"
#include "utils.h"

#include <ql/quantlib.hpp>
#include <QtCore/QAbstractTableModel>

class BondTableModel : public QAbstractTableModel {
    Q_OBJECT

public:
    BondTableModel(QObject *parent);

    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    int columnCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    void addBondData(const BondData & bondData);
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;

private:
    std::string dateToString(QuantLib::Date d) const;

private:
    std::vector<BondData> bondDatas;
};

#endif