// cubewireframe.h: Cube (wireframe).
#ifndef CUBEWIREFRAME_H
#define CUBEWIREFRAME_H 
#include "basic3d.h"
class CubeWireframe : public Basic3D {
    Q_OBJECT
public:
    CubeWireframe(QWidget* parent = 0);
protected:
    void paintEvent(QPaintEvent* e)
        override;
    void defineObject();
};
#endif // CUBEWIREFRAME_H

// Ammeraal, Leen.Computer Graphics Programming in C++ / Qt(p. 94).UNKNOWN.Kindle Edition.