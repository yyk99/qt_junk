#ifndef MAIN_DIALOG_H
#define MAIN_DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainDialog;
}
QT_END_NAMESPACE

class MainDialog : public QDialog
{
    Q_OBJECT

public:
    MainDialog(QWidget *parent = nullptr);
    ~MainDialog();

private:
    Ui::MainDialog *ui;
};
#endif // MAIN_DIALOG_H
