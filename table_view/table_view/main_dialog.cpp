#include "main_dialog.h"
#include "./ui_main_dialog.h"

#include "tablemodel.h"

MainDialog::MainDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainDialog)
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

MainDialog::~MainDialog()
{
    delete ui;
}
