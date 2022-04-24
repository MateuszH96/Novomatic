#include "Trinagle.h"
Trinagle::Trinagle(Vec2 p1,Vec2 p2, Vec2 p3){
    points[0]=p1;
    points[1]=p2;
    points[2]=p3;
}
Vec2 &Trinagle::operator[](unsigned int input){
    return points[input];
}