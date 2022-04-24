#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Vec2.h"
#include <array>
#define NUM_OF_POINTS 3
class Trinagle
{
private:
    std::array<Vec2,NUM_OF_POINTS> points;
public:
    Trinagle(Vec2 p1=Vec2(0,0),Vec2 p2=Vec2(0,0),Vec2 p3=Vec2(0,0));
    Vec2 &operator[](unsigned int input);
};

#endif