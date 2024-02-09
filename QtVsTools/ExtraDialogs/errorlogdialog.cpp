//
//
//
#include <iostream>

#include "errorlogdialog.h"
#include "ui_errorlogdialog.h"

#include "../common/DebuggingConsole.h"

ErrorLogDialog::ErrorLogDialog(QWidget *parent)
    : QDialog(parent)
    , ui {new Ui::ErrorLogDialogClass ()}
{
    ui->setupUi(this);

#ifdef BUILD_STATIC
    CONSOLE("BUILD_STATIC is defined");
#else
    CONSOLE("BUILD_STATIC is NOT defined");
#endif
}

ErrorLogDialog::~ErrorLogDialog()
{
    delete ui;
}
