//
//
//

#include "html_renderer_q5.h"
#include "../common/DebuggingConsole.h"

#include <iostream>
#include <QDebug>
#include <QMessageBox>

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
}

void
html_renderer_q5::on_about_qt()
{
    CONSOLE( "Here..." );

	QMessageBox msgBox;
    msgBox.setWindowTitle("About Qt");

    QString version = QString("QT Version: %1.%2 Patch %3").arg(QT_VERSION_MAJOR).arg(QT_VERSION_MINOR).arg(QT_VERSION_PATCH);

	msgBox.setText(version);
	msgBox.exec();
}
