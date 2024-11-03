//
//
//

#include "tab_dialog.h"
#include "ui_tab_dialog.h"

#include <QDebug>
#include <QStringListModel>
#include <QStandardItemModel>

TabDialog::TabDialog(QDialog *parent)
    : QDialog(parent)
    , ui(new Ui::TabDialog)
{
    ui->setupUi(this);
    ui->tabWidget->setCurrentIndex(0);

    qDebug() << "m_tabWidget.count" << ui->tabWidget->count();

    {
#if 0
        QStringListModel *model = new QStringListModel();
        QStringList list;
        list << "a" << "b" << "c";
        model->setStringList(list);
#else
        auto model = new QStandardItemModel(this);
        ui->listView->setModel(model);
        {
            QIcon icon(":/icons/images/boat1.png");
            QPixmap pixmap = icon.pixmap(QSize(64, 64));
            model->appendRow(new QStandardItem(QIcon(pixmap), "boat1.png"));
        }
        model->appendRow(new QStandardItem(QPixmap(":/icons/images/boat2.png"), "boat2.png"));
        model->appendRow(new QStandardItem(QPixmap(":/icons/images/boat3.png"), "boat3.png"));
#endif

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
    {
        // setup Page 3
        if (auto lst = ui->tab_3->findChild<QListWidget *>("listWidget"))
        {
            {
                QPixmap pixmap(":/icons/images/boat1.png");
                QListWidgetItem* item = new QListWidgetItem(pixmap, "boat1");
                item->setData(Qt::DecorationRole, pixmap);
                lst->addItem(item);
            }
            {
                QPixmap pixmap(":/icons/images/boat2.png");
                QListWidgetItem* item = new QListWidgetItem(pixmap, "boat2");
                item->setData(Qt::DecorationRole, pixmap);
                lst->addItem(item);
            }
            {
                QPixmap pixmap(":/icons/images/boat3.png");
                QListWidgetItem* item = new QListWidgetItem(pixmap, "boat3");
                item->setData(Qt::DecorationRole, pixmap);
                lst->addItem(item);
            }
        }
    }
    {
        auto pixmap = QPixmap(":/icons/images/boat1.png");
        qDebug() << pixmap.size();
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
