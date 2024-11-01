#ifndef TAB_DIALOG_H
#define TAB_DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class TabDialog;
}
QT_END_NAMESPACE

class TabDialog : public QDialog
{
    Q_OBJECT

public:
    TabDialog(QDialog *parent = nullptr);
    ~TabDialog();

public slots:
    // void on_<object name>_<signal name>(<signal parameters>);
    void on_connect_btn_clicked();
    void on_add_source_btn_clicked();


private:
    Ui::TabDialog *ui;
};



#endif // TAB_DIALOG_H
