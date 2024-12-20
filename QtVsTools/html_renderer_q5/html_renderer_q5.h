#pragma once

#include "ui_html_renderer_q5.h"
#include <QtWidgets/QMainWindow>
#include "ui_html_renderer_q5.h"
#include <QtWidgets/QMainWindow>

class html_renderer_q5 : public QMainWindow {
    Q_OBJECT

public:
  html_renderer_q5(QWidget *parent = nullptr);
  ~html_renderer_q5();

public slots:
    void on_quit();
    void on_about_qt();
  void on_actionRender_triggered();

private:
  Ui::html_renderer_q5Class ui;
};
