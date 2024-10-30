#ifndef ONLINESOURCESHEET_H
#define ONLINESOURCESHEET_H

#include <QDialog>

namespace Ui {
class OnlineSourceSheet;
}

class OnlineSourceSheet : public QDialog
{
    Q_OBJECT

public:
    explicit OnlineSourceSheet(QWidget *parent = nullptr);
    ~OnlineSourceSheet();

private:
    Ui::OnlineSourceSheet *ui;
};

#endif // ONLINESOURCESHEET_H
