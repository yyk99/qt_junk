#include "tablemodel.h"

#include <QDebug>

TableModel::TableModel()
{

}

void TableModel::on_sectionClicked(int pos)
{
    qDebug() << "on_sectionClicked(" << pos << ")";
}

void TableModel::on_sectionDoubleClicked(int pos)
{
    qDebug() << "on_sectionDoubleClicked(" << pos << ")";
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


QVariant TableModel::headerData(
    int section,
    Qt::Orientation orientation,
    int role
    ) const
{
    if (role == Qt::DisplayRole)
    {
        if (orientation == Qt::Horizontal)
            return QString("Property %1").arg(section);
        if (orientation == Qt::Vertical)
            return section + 1;
    }
    return {};
}
