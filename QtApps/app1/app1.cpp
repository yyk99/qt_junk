//
//
//
#include <QAction>
#include <iostream>

#include "app1.h"
#include "../common/DebuggingConsole.h"

app1::app1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.actionExit, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui.actionConsole, SIGNAL(triggered()), this, SLOT(onFileConsole()));
}

app1::~app1()
{}

void
app1::onFileConsole()
{
    attachDebugConsole();

    CONSOLE("Hello...");
}