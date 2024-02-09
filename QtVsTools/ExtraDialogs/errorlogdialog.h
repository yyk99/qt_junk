#pragma once

#include <QDialog>
#include "extradialogs_global.h"

namespace Ui {
    class ErrorLogDialogClass;
}
class EXTRADIALOGS_EXPORT ErrorLogDialog : public QDialog
{
    Q_OBJECT

public:
    ErrorLogDialog(QWidget *parent = nullptr);
    ~ErrorLogDialog();

private:
    Ui::ErrorLogDialogClass *ui;
};
