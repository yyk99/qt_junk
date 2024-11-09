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

void MainWindow::exit()
{
    QCoreApplication::quit();
}

void MainWindow::newDocument()
{
    //QCoreApplication::quit();
}

void MainWindow::openTabDialog()
{
  qDebug() << "open tab dialog";
  TabDialog dialog{};
  dialog.exec();
}
