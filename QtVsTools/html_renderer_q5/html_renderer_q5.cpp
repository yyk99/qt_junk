//
//
//

#include "html_renderer_q5.h"
#include "../common/DebuggingConsole.h"

#include <iostream>
#include <qdebug>

html_renderer_q5::html_renderer_q5(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    connect( ui.actionQuit, SIGNAL( triggered() ), this, SLOT( on_quit() ), Qt::QueuedConnection );
    connect( ui.actionAbout_Qt, SIGNAL( triggered() ), this, SLOT( on_about_qt() ) );
}

html_renderer_q5::~html_renderer_q5()
{}


void html_renderer_q5::on_quit()
{
    qDebug() << "about to on_quit...";

    QCoreApplication::quit();
} // end of function html_renderer_q5::on_quit

void
html_renderer_q5::on_about_qt()
{
    CONSOLE( "Here..." );
}
