#ifndef ONLINESOURCESMODEL_H
#define ONLINESOURCESMODEL_H

#include "../simpletreemodel/treemodel.h"

class OnlineSourcesModel : public TreeModel
{
  Q_OBJECT
  typedef TreeModel __super;
public:
  explicit OnlineSourcesModel (const QString &data, QObject *parent = nullptr);

  // Header:
  QVariant headerData (int section, Qt::Orientation orientation,
                       int role = Qt::DisplayRole) const override;

  // Basic functionality:
  QModelIndex index (int row, int column,
                     const QModelIndex &parent
                     = QModelIndex ()) const override;
  QModelIndex parent (const QModelIndex &index) const override;

  int rowCount (const QModelIndex &parent = QModelIndex ()) const override;
  int columnCount (const QModelIndex &parent = QModelIndex ()) const override;

  QVariant data (const QModelIndex &index,
                 int role = Qt::DisplayRole) const override;

  private:
};

#endif // ONLINESOURCESMODEL_H
