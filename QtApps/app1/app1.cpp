//
//
//
#include <QAction>
#include <iostream>

#include "app1.h"
#include "../ExtraDialogs/errorlogdialog.h"
#include "../common/DebuggingConsole.h"

app1::app1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.actionExit, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui.actionConsole, SIGNAL(triggered()), this, SLOT(onFileConsole()));
    connect(ui.actionViewErrorLog, SIGNAL(triggered()), this, SLOT(onViewErrorLog()));
}

app1::~app1()
{}

void app1::onViewErrorLog()
{
#if 0
    QWinWidget *win = new QWinWidget(theApp.m_pMainWnd);
    win->showCentered();

    QDialog *dialog = new QDialog(win);
#else
    QDialog *dialog = 0;
#endif
    CONSOLE("error logs...");
    auto options = new ErrorLogDialog(dialog);
    options->setAttribute(Qt::WA_DeleteOnClose);
    options->show();
}

void
app1::onFileConsole()
{
    attachDebugConsole();

    CONSOLE("Hello...");
}