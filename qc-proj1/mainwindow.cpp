#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionSelect_Online_Source, &QAction::triggered, this, &MainWindow::selectOnlineDialog);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::selectOnlineDialog()
{
    qDebug() << "Here...";
}
