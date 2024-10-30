#ifndef IMAGEGRIDDIALOG_H
#define IMAGEGRIDDIALOG_H

#include <QDialog>

namespace Ui {
class ImageGridDialog;
}

class ImageGridDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ImageGridDialog(QWidget *parent = nullptr);
    ~ImageGridDialog();

private:
    Ui::ImageGridDialog *ui;
};

#endif // IMAGEGRIDDIALOG_H
