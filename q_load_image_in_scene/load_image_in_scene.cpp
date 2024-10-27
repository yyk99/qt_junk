#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>

#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene scene;
    auto pixmap = QPixmap(":images/Carina2-Nielsen.jpg");
    qDebug() << pixmap.size();
    QGraphicsPixmapItem *item = new QGraphicsPixmapItem(pixmap);
    scene.addItem(item);

    QGraphicsView view{};
    view.setScene(&scene);
    view.show();

    return a.exec();
}
