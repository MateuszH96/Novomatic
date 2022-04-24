#include "CircleRectangleCollision.h"

CircleRectangleCollision::CircleRectangleCollision(Circle *circle,Rectangle *rectangle){
    this->circle=new Circle;
    this->circle=circle;
    this->rectangle=new Rectangle;
    this->rectangle=rectangle;
}
CircleRectangleCollision::~CircleRectangleCollision(){
    circle=NULL;
    delete circle;
    rectangle=NULL;
    delete rectangle;
}
bool CircleRectangleCollision::isCollide(){
    //sprawdzenie czy wgl są na tyl blisko siebie
    float circleX=circle->getCenterObj().x;
    float circleY=circle->getCenterObj().y;
    float rectangleX=rectangle->getCenterObj().x;
    float rectangleY=rectangle->getCenterObj().y;
    float circleRadius=circle->getRadius();
    float rectangleRadius=rectangle->getRadius();
    if (sqrt(pow(rectangleX-circleX,2)+pow(rectangleY-circleY,2))>circleRadius+rectangleRadius)
    {
        return false;
    }
    
    float angle = rectangle->getAngle();
    bool a=isTwoSfVectCollision(rectangle->getThrowX_Axis(angle),circle->getThrowX_Axis(angle));
    bool b=isTwoSfVectCollision(rectangle->getThrowY_Axis(angle),circle->getThrowY_Axis(angle));
    return a&&b;
}
bool CircleRectangleCollision::isTwoSfVectCollision(sf::Vector2f a, sf::Vector2f b)
{
    bool x=(a.x>=b.x&&a.x<=b.y)||(a.y>=b.x&&a.y<=b.y);
    bool y=(b.x>=a.x&&b.x<=a.y)||(b.y>=a.x&&b.y<=a.y);
    return x||y;
}