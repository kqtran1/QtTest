#include "BondTableModel.h"

BondTableModel::BondTableModel(QObject *parent) : QAbstractTableModel(parent), bondDatas() {
}

int BondTableModel::rowCount(const QModelIndex & parent) const {
    return bondDatas.size();
}

int BondTableModel::columnCount(const QModelIndex & parent) const {
    return 4;
}

QVariant BondTableModel::data(const QModelIndex &index, int role) const {
    BondData bondData = bondDatas[index.row()];

    if (role == Qt::DisplayRole) {
        int column = index.column();
        if (column == 0) {
            return QString::fromStdString(dateToString(bondData.issueDate));
        } else if (column == 1) {
            return QString::fromStdString(dateToString(bondData.maturity));
        } else if (column == 2) {
            return QVariant(bondData.couponRate);
        } else if (column == 3) {
            return QVariant(bondData.marketQuote);
        }
    }
    return QVariant();
}

std::string BondTableModel::dateToString(QuantLib::Date d) const {
    std::stringstream stream;
    stream << d.dayOfMonth() << "-" << d.month() << "-" << d.year();
    return stream.str();
}

void BondTableModel::addBondData(const BondData & bondData) {
    beginInsertRows(QModelIndex(), bondDatas.size(), bondDatas.size());
    std::cout << bondData.couponRate << std::endl;
    bondDatas.push_back(bondData);
    endInsertRows();
    
    QModelIndex top = createIndex(bondDatas.size(), 0, 0);
    QModelIndex bottom = createIndex(bondDatas.size(), 4, 0);

    emit dataChanged(top, bottom);
}

QVariant BondTableModel::headerData(int section, Qt::Orientation orientation, int role) const {
    if (role == Qt::DisplayRole) {
        if (orientation == Qt::Horizontal) {
            switch (section) {
                case 0:
                    return QString("Issue Date");
                case 1:
                    return QString("Maturity");
                case 2:
                    return QString("Coupon Rate");
                case 3:
                    return QString("Market Quote");
            }
        }
    }
    return QVariant();
}