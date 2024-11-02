//
//
//

#include "tab_dialog.h"
#include "ui_tab_dialog.h"

#include <QDebug>

TabDialog::TabDialog(QDialog *parent)
    : QDialog(parent)
    , ui(new Ui::TabDialog)
{
    ui->setupUi(this);

    qDebug() << "m_tabWidget.count" << ui->tabWidget->count();
}

TabDialog::~TabDialog()
{
    delete ui;
}

void
TabDialog::on_connect_btn_clicked()
{
    qDebug() << "on_connect_btn_clicked...";
    qDebug() << "Current:" << ui->tabWidget->currentWidget()->windowTitle();
    qDebug() << "current index:" << ui->tabWidget->currentIndex();
}

void
TabDialog::on_add_source_btn_clicked()
{
    qDebug() << "on_add_source_btn_clicked...";
}
