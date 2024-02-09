//
//
//

#include "simpledialog.h"
#include "ui_simpledialog.h"

#include "../common/DebuggingConsole.h"
#include <iostream>

SimpleDialog::SimpleDialog(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SimpleDialogClass())
{
    ui->setupUi(this);
}

SimpleDialog::~SimpleDialog()
{
    delete ui;
    CONSOLE((void *)this);
}
