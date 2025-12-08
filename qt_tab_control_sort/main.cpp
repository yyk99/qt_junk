#include <QApplication>
#include <QAbstractTableModel>
#include <QTableView>

class TestModel : public QAbstractTableModel
{
public:
    int rowCount(const QModelIndex &parent = QModelIndex()) const
    {
        return 2;
    }
    int columnCount(const QModelIndex &parent = QModelIndex()) const
    {
        return 2;
    }
    QVariant data(const QModelIndex &index, int role) const
    {
        switch (role)
        {
        case Qt::DisplayRole:
        {
            return 4 - index.row() + index.column();
        }
        }
        return QVariant();
    }
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTableView table;
    TestModel model;
    table.setModel(&model);
    table.setSortingEnabled(true);
    table.sortByColumn(0, Qt::AscendingOrder);
    table.reset();
    table.show();

    return a.exec();
}