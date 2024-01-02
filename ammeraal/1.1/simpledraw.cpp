// simpledraw.cpp: Drawing a diagonal.
#include "simpledraw.h"
int main(int argc, char* argv[]) {
    QApplication a(argc, argv);
    SimpleDraw w;
    w.show();
    return a.exec();
}
SimpleDraw::SimpleDraw(QWidget* parent) :
    QMainWindow(parent) {
    setGeometry(40, 40, 600, 400);
    setWindowTitle("Drawing a diagonal");
}
void SimpleDraw::paintEvent(
    QPaintEvent* e) {
    QPainter p(this);
    p.drawLine(0, 0,
        width() - 1, height() - 1);
}

// Ammeraal, Leen.Computer Graphics Programming in C++ / Qt(pp. 3 - 4).UNKNOWN.Kindle Edition.