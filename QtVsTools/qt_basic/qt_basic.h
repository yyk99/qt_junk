#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_qt_basic.h"

class qt_basic : public QMainWindow
{
    Q_OBJECT

public:
    qt_basic(QWidget *parent = nullptr);
    ~qt_basic();

private:
    Ui::qt_basicClass ui;
};
