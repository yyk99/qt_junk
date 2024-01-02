// wireframe.h: Wireframe models.
#ifndef WIREFRAME_H
#define WIREFRAME_H
#include "basic3d.h"
class Wireframe : public Basic3D {
    Q_OBJECT
public:
    Wireframe(QWidget* parent = 0);
protected:
    void paintEvent(QPaintEvent* e)
        override;
};
#endif // WIREFRAME_H

// Ammeraal, Leen.Computer Graphics Programming in C++ / Qt(p. 99).UNKNOWN.Kindle Edition.