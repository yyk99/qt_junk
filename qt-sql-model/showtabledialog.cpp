#include "showtabledialog.h"
#include "ui_showtabledialog.h"

#include "showtabledialog.h"

ShowTableDialog::ShowTableDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ShowTableDialog)
{
    ui->setupUi(this);
}

ShowTableDialog::~ShowTableDialog()
{
    delete ui;
}
