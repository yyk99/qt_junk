#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "onlinesourcesheet.h"
#include "imagegriddialog.h"
#include "aboutdialog.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , onlineSourceSheet{}
{
    ui->setupUi(this);

    {
        auto g = this->geometry();
        qDebug() << "the geometry" << g;
    }
    setGeometry({0,0,800,600});
    {
        auto g = this->geometry();
        qDebug() << "the geometry updated" << g;
    }

    {

    }
    connect(ui->actionSelect_Online_Source, &QAction::triggered, this, &MainWindow::selectOnlineDialog);
    connect(ui->actionImage_Grid, &QAction::triggered, this, &MainWindow::onImageGrid);
    connect(ui->actionAbout, &QAction::triggered, this, &MainWindow::onAbout);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete onlineSourceSheet;
}

void MainWindow::selectOnlineDialog()
{
    qDebug() << "Here...";
#if 1
    OnlineSourceSheet dialog{};
    dialog.exec();
#else
    if (!onlineSourceSheet) {
        onlineSourceSheet = new OnlineSourceSheet(this);
        //connect(findDialog, &FindDialog::findNext,
        //        this, &EditorWindow::findNext);
    }

    onlineSourceSheet->show();
    onlineSourceSheet->raise();
    onlineSourceSheet->activateWindow();
#endif
}

void MainWindow::onImageGrid()
{
    ImageGridDialog dlg{};
    dlg.exec();
}

void MainWindow::onAbout()
{
    AboutDialog dlg{};
    dlg.exec();
}
