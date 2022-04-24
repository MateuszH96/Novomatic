#ifndef CIRCLE_RECTANGLE_COLLISION_H
#define CIRCLE_RECTANGLE_COLLISION_H
#include "Circle.h"
#include "Rectangle.h"
#include <cmath>
class CircleRectangleCollision
{
private:
    Circle *circle;
    Rectangle *rectangle;
    bool isTwoSfVectCollision(sf::Vector2f a, sf::Vector2f b);
public:
    CircleRectangleCollision(Circle *Circle,Rectangle *Rectangle);
    bool isCollide();
    ~CircleRectangleCollision();
};


#endif