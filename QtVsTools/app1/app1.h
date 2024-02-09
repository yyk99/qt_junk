#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_app1.h"

class app1 : public QMainWindow
{
    Q_OBJECT

public:
    app1(QWidget *parent = nullptr);
    ~app1();

public Q_SLOTS:
    void onFileConsole();
    void onViewErrorLog();
    void onViewSimple_Dialog();

private:
    Ui::app1Class ui;
};
