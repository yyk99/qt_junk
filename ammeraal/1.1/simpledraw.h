// simpledraw.h: Drawing a diagonal.
#ifndef SIMPLEDRAW_H
#define SIMPLEDRAW_H
#include <QtWidgets>
class SimpleDraw : public QMainWindow {
    Q_OBJECT
public:
    SimpleDraw(QWidget* parent = 0);
protected:
    void paintEvent(QPaintEvent* e)
        override;
};
#endif // SIMPLEDRAW_H

// Ammeraal, Leen.Computer Graphics Programming in C++ / Qt(p. 2).UNKNOWN.Kindle Edition.