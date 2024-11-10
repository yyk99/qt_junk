//
//
//

#include "renderdialogtoo.h"
#include "ui_renderdialogtoo.h"

RenderDialogToo::RenderDialogToo(QWidget *parent)
    : QDialog(parent), ui(new Ui::RenderDialogTooClass()) {
  ui->setupUi(this);
  // ...
  ui->textBrowser->setOpenExternalLinks(true);
}

RenderDialogToo::~RenderDialogToo() { delete ui; }

void RenderDialogToo::setText(QString const &text) {
  ui->textBrowser->setHtml(text);
}
