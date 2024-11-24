#ifndef TABLEMODEL_H
#define TABLEMODEL_H

#include <QAbstractTableModel>

class TableModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit TableModel();

//signals:

    // QAbstractItemModel interface

public slots:
    void on_sectionClicked(int);
    void on_sectionDoubleClicked(int);

public:
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;

    // QAbstractItemModel interface
public:
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
};

#endif // TABLEMODEL_H
