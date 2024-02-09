#pragma once

#include <QMainWindow>
#include "extradialogs_global.h"

QT_BEGIN_NAMESPACE
namespace Ui { class SimpleDialogClass; };
QT_END_NAMESPACE

class EXTRADIALOGS_EXPORT SimpleDialog : public QMainWindow
{
    Q_OBJECT

public:
    SimpleDialog(QWidget *parent = nullptr);
    ~SimpleDialog();

private:
    Ui::SimpleDialogClass *ui;
};
