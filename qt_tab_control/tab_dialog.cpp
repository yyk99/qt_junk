//
//
//

#include "tab_dialog.h"
#include "ui_tab_dialog.h"

#include <QDebug>
#include <QStringListModel>
#include <QStandardItemModel>
#include <QFileDialog>
#include <QErrorMessage>
#include <QMessageBox>
#include <QFileInfo>

TabDialog::TabDialog(QDialog *parent)
    : QDialog(parent)
    , ui(new Ui::TabDialog)
{
    ui->setupUi(this);
    ui->tabWidget->setCurrentIndex(0);

    qDebug() << "m_tabWidget.count" << ui->tabWidget->count();

    {
        auto model = new QStandardItemModel(this);
        ui->listView->setModel(model);
        {
            QIcon icon(":/icons/images/boat1.png");
            QPixmap pixmap = icon.pixmap(QSize(64, 64));
            model->appendRow(new QStandardItem(QIcon(pixmap), "boat1.png"));
        }
        model->appendRow(new QStandardItem(QPixmap(":/icons/images/boat2.png"), "boat2.png"));
        model->appendRow(new QStandardItem(QPixmap(":/icons/images/boat3.png"), "boat3.png"));

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
        if (auto lst = ui->tab_3->findChild<QListWidget *>())
        {
            // See https://stackoverflow.com/questions/56617364/how-to-set-icon-at-left-of-text-in-a-qlistwidgetitem
            // Set label under the icons
            lst->setViewMode(QListView::IconMode);
            int w = 400, h = 400;
            for (auto s : {"/icons/images/boat1.png", "/icons/images/boat2.png", "/icons/images/boat3.png"})
            {
                auto d = QFileInfo(s);
                QPixmap pixmap(QString(":") + s);
                qDebug() << pixmap.size();
                QListWidgetItem* item = new QListWidgetItem(d.fileName());
                item->setData(Qt::DecorationRole, pixmap.scaled(w, h));
                lst->addItem(item);
            }
        }
    }
    {        
        ui->treeWidget->setColumnCount(1);
        QList<QTreeWidgetItem *> items;
        items.append(new QTreeWidgetItem(static_cast<QTreeWidget *>(nullptr), QStringList({"one", "two", "three"})));
        ui->treeWidget->insertTopLevelItems(0, items);
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
    QWidget *tab = ui->tabWidget->currentWidget();
    if (auto lst = tab->findChild<QListWidget *>())
    {
        lst->setViewMode(QListView::IconMode);
        QString fileName = QFileDialog::getOpenFileName(
            this,
            tr("Open Image"), ".", tr("Image Files (*.png *.jpg *.bmp)")
            );
        if (fileName.length())
        {
            QPixmap pixmap(fileName);
            QListWidgetItem* item = new QListWidgetItem(pixmap, fileName);
            item->setData(Qt::DecorationRole, pixmap);
            lst->addItem(item);
        }
    } else {
        QMessageBox msgBox;
        msgBox.setText(tr("Cannot find QListWidget"));
        msgBox.setWindowTitle(tr("Cannot..."));
        msgBox.exec();
    }
}

void
TabDialog::on_add_tab_btn_clicked()
{
    qDebug() << "void on_add_tab_btn_clicked()";
    {
        auto tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        auto horizontalLayout = new QHBoxLayout(tab_1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        auto listWidget = new QListWidget(tab_1);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        horizontalLayout->addWidget(listWidget);
        int pos = ui->tabWidget->addTab(tab_1, QString("One more tab"));
        // select the just added tab
        ui->tabWidget->setCurrentIndex(pos);
    }
}
