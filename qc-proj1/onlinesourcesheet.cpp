#include "onlinesourcesheet.h"
#include "ui_onlinesourcesheet.h"

OnlineSourceSheet::OnlineSourceSheet(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::OnlineSourceSheet)
{
    ui->setupUi(this);
}

OnlineSourceSheet::~OnlineSourceSheet()
{
    delete ui;
}
