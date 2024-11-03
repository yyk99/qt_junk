//
//
//

#include "tab_dialog.h"
#include "ui_tab_dialog.h"

#include <QDebug>
#include <QStringListModel>

TabDialog::TabDialog(QDialog *parent)
    : QDialog(parent)
    , ui(new Ui::TabDialog)
{
    ui->setupUi(this);

    qDebug() << "m_tabWidget.count" << ui->tabWidget->count();

    {
        QStringListModel *model = new QStringListModel();
        QStringList list;
        list << "a" << "b" << "c";
        model->setStringList(list);

        // Setup first tab model
        if (auto lst = ui->tabWidget->widget(0)->findChild<QListView *>("listView"))
        {
            lst->setModel(model);
        }
    }
    {
        QStringListModel *model = new QStringListModel();
        QStringList list;
        list << "a1" << "b1" << "c1";
        model->setStringList(list);
        // Setup first tab model
        if (auto lst = ui->tabWidget->widget(1)->findChild<QTableView *>("tableView"))
        {
            lst->setModel(model);
        }
    }
}

TabDialog::~TabDialog()
{
    delete ui;
}

void
TabDialog::on_connect_btn_clicked()
{
    qDebug() << "on_connect_btn_clicked...";
    qDebug() << "Current:" << ui->tabWidget->currentWidget()->windowTitle();
    qDebug() << "current index:" << ui->tabWidget->currentIndex();

    qDebug() << "Current Tab text:" << ui->tabWidget->tabText(ui->tabWidget->currentIndex());
}

void
TabDialog::on_add_source_btn_clicked()
{
    qDebug() << "on_add_source_btn_clicked...";
    QWidget *tab = ui->tabWidget->currentWidget();
    if (auto lst  = tab->findChild<QListView *>("listView"))
    {
        qDebug() << "Found!";
        if(auto model = dynamic_cast<QStringListModel*>(lst->model()))
        {
            auto data = model->stringList();
            data.append("One more");
            model->setStringList(data);
        }
    } else if (auto lst = tab->findChild<QTableView *>("tableView"))
    {
        qDebug() << "Found table!";
        if(auto model = dynamic_cast<QStringListModel*>(lst->model()))
        {
            auto data = model->stringList();
            data.append("One more row");
            model->setStringList(data);
        }
    }
}
