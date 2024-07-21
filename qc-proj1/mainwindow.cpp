#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "onlinesourcesheet.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , onlineSourceSheet{}
{
    ui->setupUi(this);

    connect(ui->actionSelect_Online_Source, &QAction::triggered, this, &MainWindow::selectOnlineDialog);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete onlineSourceSheet;
}

void MainWindow::selectOnlineDialog()
{
    qDebug() << "Here...";
#if 0
    OnlineSourceSheet dialog(this);
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
