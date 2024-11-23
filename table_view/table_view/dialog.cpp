#include "dialog.h"
#include "./ui_dialog.h"

#include "tableview.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->tableView->setModel(new TableView());
}

Dialog::~Dialog()
{
    delete ui;
}
