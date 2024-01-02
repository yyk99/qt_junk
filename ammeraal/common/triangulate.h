// triangulate.h: Triangulation of
//    polygons.
#ifndef TRIANGULATE_H
#define TRIANGULATE_H
#include <QtWidgets>
#include "points.h"
using namespace std;
struct Tria { int A, B, C; };
class Triangulate {
public:
    static bool triangulate(

// Ammeraal, Leen.Computer Graphics Programming in C++ / Qt(p. 49).UNKNOWN.Kindle Edition.
const vector<Point2D>& scr,
vector<int> pol,
vector<Tria>& trias);
    static int orientation(
       const vector<Point2D>& scr,
       int Pnr, int Qnr, int Rnr);
    static double angle(
       const vector<Point2D>& scr,
       int A, int B, int C);
    static bool insideTriangle(
       const vector<Point2D>& scr,
       int A, int B, int C, int P);
    static bool anyFlipping(
       const vector<Point2D>& scr,
       vector<Tria>& trias);
    static bool isCounterclockwise(
       const vector<Point2D>& scr,
       const vector<int>& nrs);
};
#endif // TRIANGULATE_H

// Ammeraal, Leen.Computer Graphics Programming in C++ / Qt(pp. 49 - 50).UNKNOWN.Kindle Edition.