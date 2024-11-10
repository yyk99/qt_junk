//
//
//

#include "onlinesourcesmodel.h"
#include <QDebug>

OnlineSourcesModel::OnlineSourcesModel (const QString &data, QObject *parent)
    : TreeModel (data, parent)
{
  qDebug() << "Here...";
}

QVariant
OnlineSourcesModel::headerData (
    int section, Qt::Orientation orientation,
    int role
    ) const
{
  return __super::headerData(section, orientation, role);
}

QModelIndex
OnlineSourcesModel::index (
    int row, int column,
    const QModelIndex &parent
    ) const
{
  return __super::index(row, column, parent);
}

QModelIndex
OnlineSourcesModel::parent (const QModelIndex &index) const
{
  return __super::parent(index);
}

int
OnlineSourcesModel::rowCount (const QModelIndex &parent) const
{
  return __super::rowCount(parent);
}

int
OnlineSourcesModel::columnCount (const QModelIndex &parent) const
{
  return __super::columnCount(parent);
}

QVariant
OnlineSourcesModel::data (const QModelIndex &index, int role) const
{
  auto d = __super::data(index, role);
  return d;
}
