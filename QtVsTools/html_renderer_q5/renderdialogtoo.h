#pragma once

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class RenderDialogTooClass;
};
QT_END_NAMESPACE

class RenderDialogToo : public QDialog {
  Q_OBJECT

public:
  RenderDialogToo(QWidget *parent = nullptr);
  ~RenderDialogToo();

  void setText(QString const &text);

private:
  Ui::RenderDialogTooClass *ui;
};
