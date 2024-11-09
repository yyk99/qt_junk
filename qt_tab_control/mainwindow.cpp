#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "tab_dialog.h"
#include "tabdialogtoo.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    qDebug() << "newDocument";
}

void MainWindow::on_actionOpen_Tab_Dialog_triggered()
{
  qDebug() << "open tab dialog";
  TabDialog dialog{};
  dialog.exec();
}

void MainWindow::on_actionOpen_Tab_Too_Dialog_triggered()
{
  qDebug() << __func__ ;
  TabDialogtoo dlg{};
  dlg.exec();
}
