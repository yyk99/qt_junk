#ifndef SLOTDEMO_H
#define SLOTDEMO_H
#include <QtWidgets>
class SlotDemo : public QMainWindow {
    Q_OBJECT
public:
    SlotDemo(QWidget* parent = 0);
protected:
    int xDeviationPerc;
    QPushButton buttonLeft, buttonRight;
    void paintEvent(QPaintEvent* e)
        override;
    void resizeEvent(QResizeEvent* e)
        override;
private slots:
    void handleButtonLeft();
    void handleButtonRight();
};
#endif // SLOTDEMO_H

// Ammeraal, Leen.Computer Graphics Programming in C++ / Qt(p. 7).UNKNOWN.Kindle Edition.