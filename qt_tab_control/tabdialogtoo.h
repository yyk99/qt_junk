#ifndef TABDIALOGTOO_H
#define TABDIALOGTOO_H

#include <QDialog>
#include <QAbstractItemModel>

namespace Ui
{
class TabDialogtoo;
}

class TabDialogtoo : public QDialog
{
  Q_OBJECT

public:
  explicit TabDialogtoo (QDialog *parent = nullptr);
  ~TabDialogtoo ();

public slots:
  void on_actionLoad_more_triggered();

private:
  Ui::TabDialogtoo *ui;
  QAbstractItemModel *model;
};

#endif // TABDIALOGTOO_H
