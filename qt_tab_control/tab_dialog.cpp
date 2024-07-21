//
//
//

#include "tab_dialog.h"
#include "./ui_tab_dialog.h"

TabDialog::TabDialog(QDialog *parent)
    : QDialog(parent)
    , ui(new Ui::TabDialog)
{
    ui->setupUi(this);
}

TabDialog::~TabDialog()
{
    delete ui;
}

