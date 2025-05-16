#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "showtabledialog.h"

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

void MainWindow::on_actionTable_1_triggered()
{
    ShowTableDialog dlg;
    dlg.setWindowTitle("Table 1");
    dlg.exec();
}

void MainWindow::on_actionTable_2_triggered()
{
    ShowTableDialog dlg;
    dlg.setWindowTitle("Table 2");
    dlg.exec();
}
