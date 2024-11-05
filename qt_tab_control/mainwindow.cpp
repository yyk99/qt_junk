#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "tab_dialog.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionNew, &QAction::triggered, this, &MainWindow::newDocument);
    connect(ui->actionQuit, &QAction::triggered, this, &MainWindow::exit);
    connect(ui->actionOpen_Tab_Dialog, &QAction::triggered, this, &MainWindow::openTabDialog);
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
