#include "qt_basic.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qt_basic w;
    w.show();
    return a.exec();
}
