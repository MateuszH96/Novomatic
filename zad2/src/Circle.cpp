#include "Circle.h"

Circle::Circle(float radius)
{
    circle = sf::CircleShape(radius);
}
//SETTERY
sf::CircleShape Circle::getCircle()
{
    return circle;
}
void Circle::setColor(sf::Color color){
    circle.setFillColor(color);
}
void Circle::setPosition(float x,float y)
{
    circle.setPosition(x,y);
}
void Circle::setCenterPoint()
{
    circle.setOrigin(getRadius(),getRadius());
}
//GETTERY
float Circle::getRadius()
{
    return circle.getRadius();
}
sf::Vector2f Circle::getCenterObj()
{
    return circle.getTransform().transformPoint(circle.getOrigin().x, circle.getOrigin().y);
}
sf::Vector2f Circle::getThrowX_Axis(float angle){
    float radiusAngle=fmod(angle,90.f);
    sf::Vector2f circleCenter =getCenterObj();
    float newX_AxisCircle = circleCenter.x - (circleCenter.y / tan(DEGREE(radiusAngle)));
    float circleRadius = circle.getRadius()/sin(DEGREE(radiusAngle));
    sf::Vector2f circleX(newX_AxisCircle - circleRadius, newX_AxisCircle + circleRadius);
    return circleX;
}
sf::Vector2f Circle::getThrowY_Axis(float angle){
    float radiusAngle=fmod(angle,90.f); 
    sf::Vector2f circleCenter =getCenterObj();
    float newY_AxisCircle = circleCenter.y + (circleCenter.x / tan(DEGREE(radiusAngle)));
    float circleRadius = circle.getRadius()/sin(DEGREE(radiusAngle));
    sf::Vector2f circleY(newY_AxisCircle - circleRadius, newY_AxisCircle + circleRadius);
    return circleY;
}