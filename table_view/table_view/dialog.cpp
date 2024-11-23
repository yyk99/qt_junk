#include "dialog.h"
#include "./ui_dialog.h"

#include "tablemodel.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->tableView->setModel(new TableModel());
}

Dialog::~Dialog()
{
    delete ui;
}
