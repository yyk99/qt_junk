#ifndef SHOWTABLEDIALOG_H
#define SHOWTABLEDIALOG_H

#include <QDialog>

namespace Ui {
class ShowTableDialog;
}

class ShowTableDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ShowTableDialog(QWidget *parent = nullptr);
    ~ShowTableDialog();

private:
    Ui::ShowTableDialog *ui;
};

#endif // SHOWTABLEDIALOG_H
