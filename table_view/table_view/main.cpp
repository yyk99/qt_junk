#include "main_dialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainDialog w;
    w.setWindowTitle("Table View Dialog");
    w.show();
    return a.exec();
}
