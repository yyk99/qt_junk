#include "imagegriddialog.h"
#include "ui_imagegriddialog.h"

ImageGridDialog::ImageGridDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ImageGridDialog)
{
    ui->setupUi(this);
}

ImageGridDialog::~ImageGridDialog()
{
    delete ui;
}
