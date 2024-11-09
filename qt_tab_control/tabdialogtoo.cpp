#include "tabdialogtoo.h"
#include "ui_tabdialogtoo.h"

#include <QDebug>

TabDialogtoo::TabDialogtoo (QDialog *parent)
    : QDialog (parent), ui (new Ui::TabDialogtoo)
{
  ui->setupUi (this);
  setWindowTitle("Super Pooper");
}

TabDialogtoo::~TabDialogtoo () { delete ui; }


//
void TabDialogtoo::on_actionLoad_more_triggered()
{
  qDebug() << __func__;
}
