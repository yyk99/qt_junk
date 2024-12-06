#ifndef CUSTOMWIDGET_H
#define CUSTOMWIDGET_H

#include <QWidget>

class QListWidgetItem;
class QListView;
class QPushButton;
class QLineEdit;
class QSqlTableModel;
class CustomWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CustomWidget(QWidget *parent = 0);
#if 0
private slots:
    void itemClicked(QListWidgetItem* item);
    void updateItem();
#endif
private:
    QListView *m_view;
    QLineEdit *m_edit;
    QPushButton *m_button;
    QSqlTableModel *m_model;
};
#endif // CUSTOMWIDGET_H
