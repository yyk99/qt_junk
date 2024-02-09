#pragma once

#include <QDialog>

namespace Ui {
    class ErrorLogDialogClass;
}
class ErrorLogDialog : public QDialog
{
    Q_OBJECT

public:
    ErrorLogDialog(QWidget *parent = nullptr);
    ~ErrorLogDialog();

private:
    Ui::ErrorLogDialogClass *ui;
};
