#ifndef TABLEVIEW_H
#define TABLEVIEW_H

#include <QAbstractTableModel>

class TableView : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit TableView();



signals:

    // QAbstractItemModel interface
public:
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
};

#endif // TABLEVIEW_H
