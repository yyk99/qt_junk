#include "onlinesourcesheet.h"
#include "ui_onlinesourcesheet.h"

OnlineSourceSheet::OnlineSourceSheet(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::OnlineSourceSheet)
{
    ui->setupUi(this);
    setGeometry({0,0,800,600});
}

OnlineSourceSheet::~OnlineSourceSheet()
{
    delete ui;
}
