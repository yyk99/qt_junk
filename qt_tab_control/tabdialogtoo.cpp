#include "tabdialogtoo.h"
#include "ui_tabdialogtoo.h"

#include "onlinesourcesmodel.h"

#include <QDebug>
#include <QDirModel>

TabDialogtoo::TabDialogtoo (QDialog *parent)
    : QDialog (parent)
    , ui (new Ui::TabDialogtoo)
    , model{}
{
  ui->setupUi (this);
  setWindowTitle(tr("Super Dooper"));

  {
    QTreeWidget &treeWidget = *ui->treeWidget;

    treeWidget.setColumnCount(2); // Set the number of columns
    QStringList headers;
    headers << "Name" << "Value";
    treeWidget.setHeaderLabels(headers); // Set the header labels

           // Add items to the tree
    QTreeWidgetItem *topLevelItem = new QTreeWidgetItem(&treeWidget);
    topLevelItem->setText(0, "Item 1");
    topLevelItem->setText(1, "Value 1");

    QTreeWidgetItem *childItem = new QTreeWidgetItem(topLevelItem);
    childItem->setText(0, "Child Item 1");
    childItem->setText(1, "Child Value 1");

    treeWidget.show();
  }
  {
#if 0
    // Create and populate our model
    auto model = new QDirModel(this);

    // Enable modifying file system
    model->setReadOnly(true);

    // Tie TreeView with DirModel
    // QTreeView::setModel(QAbstractItemModel * model)
    // Reimplemented from QAbstractItemView::setModel().
#else
    QFile file(":/default.txt");
    file.open(QIODevice::ReadOnly);

    QString s = file.readAll();
    qDebug() << s;
    file.close();

    model = new OnlineSourcesModel(s, this);
    qDebug() << "row count:" << model->rowCount();
#endif
    ui->treeView->setModel(model);
  }
}

TabDialogtoo::~TabDialogtoo ()
{
  delete ui;
  delete model;
}


//
void TabDialogtoo::on_actionLoad_more_triggered()
{
  qDebug() << __func__;
}
