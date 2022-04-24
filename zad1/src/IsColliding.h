#ifndef IS_COLLIDING_H
#define IS_COLLIDING_H
#include "Trinagle.h"
class IsColliding
{
private:
    static bool isPointInside(Trinagle t1,Trinagle t2);
    static float triangleSquare(Vec2 a,Vec2 b,Vec2 c);
public:
    static bool isColliding(const Trinagle t1,const Trinagle t2);
};


#endif