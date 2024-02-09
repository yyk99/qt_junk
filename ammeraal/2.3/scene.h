// scene.h: Line remains in center 
//          of resized window.
#ifndef SCENE_H
#define SCENE_H
#include <QtWidgets>
class Scene : public QMainWindow {
    Q_OBJECT
public:
    Scene(QWidget* parent = 0);

//    Ammeraal, Leen.Computer Graphics Programming in C++ / Qt(p. 67).UNKNOWN.Kindle Edition.
protected:
    QGraphicsScene scene;
    QGraphicsView view;
};
#endif // SCENE_H
