//
//
//

#include "html_renderer_q5.h"
#include "renderdialogtoo.h"

#include "../common/DebuggingConsole.h"

#include <QDate>
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QFileSelector>
#include <QMessageBox>
#include <iostream>
#include <qdebug>

html_renderer_q5::html_renderer_q5(QWidget *parent) : QMainWindow(parent) {
    ui.setupUi(this);

  connect(ui.actionQuit, SIGNAL(triggered()), this, SLOT(on_quit()),
          Qt::QueuedConnection);
  connect(ui.actionAbout_Qt, SIGNAL(triggered()), this, SLOT(on_about_qt()));
}

html_renderer_q5::~html_renderer_q5() {}

void html_renderer_q5::on_quit() {
    qDebug() << "about to on_quit...";

    QCoreApplication::quit();
}

void html_renderer_q5::on_about_qt() {
  CONSOLE("Here...");

  qDebug() << "Date:" << QDate::currentDate();
  qDebug() << "Types:" << QString("String") << QChar('x')
           << QRect(0, 10, 50, 40);

  QMessageBox msgBox;
  msgBox.setWindowTitle("About Qt");

  QString version = QString("QT Version: %1.%2 Patch %3")
                        .arg(QT_VERSION_MAJOR)
                        .arg(QT_VERSION_MINOR)
                        .arg(QT_VERSION_PATCH);

  msgBox.setText(version);
  msgBox.exec();
}

void html_renderer_q5::on_actionRender_triggered() {
  CONSOLE("START...");

  QFileDialog dialog(this);
  dialog.setFileMode(QFileDialog::AnyFile);

  auto fileName = QFileDialog::getOpenFileName(this, tr("Open HTML file"), ".",
                                               tr("HTML Files (*.htm *.html)"));
  if (!fileName.isEmpty()) {
    QFile f(fileName);

    if (!f.open(QIODevice::ReadOnly | QIODevice::Text))
      return;

    QByteArray bytes = f.readAll();
    QString s = QString(bytes);

    RenderDialogToo rnd;

    rnd.setText(s);
    rnd.exec();

    CONSOLE("Hm...");
  }

  CONSOLE("STOP...");
}
