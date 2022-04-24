#ifndef VEC2_H
#define VEC2_H
#include <iostream>
class Vec2
{
private:
    float x,y;
public:
    Vec2(float _x=0,float _y=0): x(_x), y(_y){}
    float getX();
    float getY();
};

#endif