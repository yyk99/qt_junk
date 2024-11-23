#include "tablemodel.h"

TableModel::TableModel()
{

}


int TableModel::rowCount(const QModelIndex &parent) const
{
    return 3;
}

int TableModel::columnCount(const QModelIndex &parent) const
{
    return 5;
}

QVariant TableModel::data(const QModelIndex &index, int role) const
{
    if (role == Qt::DisplayRole) {
        return QString("Row%1, Column%2")
            .arg(index.row() + 1)
            .arg(index.column() +1);
    }
    return QVariant();
}
