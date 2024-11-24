#include "dialog.h"
#include "./ui_dialog.h"

#include "tablemodel.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    auto model = new TableModel();
    ui->tableView->setModel(model);
    QHeaderView *hdr = ui->tableView->horizontalHeader();
    // void QHeaderView::sectionClicked(int logicalIndex)
    // https://doc.qt.io/qt-5/qheaderview.html#sectionClicked
    hdr->setSectionsClickable(true);
    {
        auto ok = connect(hdr, SIGNAL(sectionClicked(int)), model, SLOT(on_sectionClicked(int)));
        qDebug() << "ok" << ok;
    }
    {
        auto ok = QObject::connect(hdr, SIGNAL(sectionDoubleClicked(int)), model, SLOT(on_sectionDoubleClicked(int)));
        qDebug() << "ok" << ok;
    }
}

Dialog::~Dialog()
{
    delete ui;
}
