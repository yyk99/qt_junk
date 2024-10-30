#include <QApplication>
#include <QLabel>
#include <QPixmap>
#include <QDebug>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QLabel label;
#if 1
    QPixmap pixmap(":images/Carina2-Nielsen.jpg"); // If using a resource file

    qDebug() << pixmap.size();
#else
    QPixmap pixmap("path/to/your/image.png"); // If not using a resource file
#endif
    label.setPixmap(pixmap);
    label.show();

    return a.exec();
}