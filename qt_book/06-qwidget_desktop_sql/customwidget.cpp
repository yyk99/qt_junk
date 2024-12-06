#include "customwidget.h"

#include <QPushButton>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QListView>

#include <QApplication>

#include <QSqlDatabase>
#include <QSqlTableModel>

CustomWidget::CustomWidget(QWidget *parent) :
    QWidget(parent)
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    m_view = new QListView(this);
    layout->addWidget(m_view);

    m_edit = new QLineEdit(this);
    layout->addWidget(m_edit);

    m_button = new QPushButton("Quit", this);
    layout->addWidget(m_button);
    setLayout(layout);

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("cities.db");
    if(!db.open()) {
        qFatal("unable to open database");
    }

    m_model = new QSqlTableModel(this);
    m_model->setTable("city");
    m_model->setHeaderData(0, Qt::Horizontal, "City");
    m_model->setHeaderData(1, Qt::Horizontal, "Country");

    m_view->setModel(m_model);
    m_model->select();

//    connect(m_view, SIGNAL(itemClicked(QListViewItem*)), this, SLOT(itemClicked(QListViewItem*)));
//    connect(m_edit, SIGNAL(editingFinished()), this, SLOT(updateItem()));
    connect(m_button, SIGNAL(clicked()), qApp, SLOT(quit()));
}

#if 0
void CustomWidget::itemClicked(QListViewItem *item)
{
    Q_ASSERT(item);
    m_edit->setText(item->text());
}

void CustomWidget::updateItem()
{
    QListViewItem* item = m_view->currentItem();
    if(item) {
        item->setText(m_edit->text());
    }
}
#endif
