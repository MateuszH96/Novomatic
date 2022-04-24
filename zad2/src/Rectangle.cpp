#include "Rectangle.h"

Rectangle::Rectangle(float width, float hight)
{
    rectangle = sf::RectangleShape(sf::Vector2f(width, hight));
}
// SETTERY
sf::RectangleShape Rectangle::getRectangle()
{
    return rectangle;
}
void Rectangle::setColor(sf::Color color)
{
    rectangle.setFillColor(color);
}
void Rectangle::setPosition(float x, float y)
{
    rectangle.setPosition(x, y);
}
void Rectangle::setCenterPoint()
{
    rectangle.setOrigin(getWidth() / 2, getHight() / 2);
}
// GETTERY
float Rectangle::getWidth()
{
    return rectangle.getSize().x;
}
float Rectangle::getHight()
{
    return rectangle.getSize().y;
}
float Rectangle::getRadius()
{
    float x = getWidth() / 2;
    float y = getHight() / 2;
    return sqrt(pow(x, 2) + pow(y, 2));
}
sf::Vector2f Rectangle::getCenterObj()
{
    return rectangle.getTransform().transformPoint(rectangle.getOrigin().x, rectangle.getOrigin().y);
}
sf::Vector2f Rectangle::getThrowX_Axis(float angle)
{
    float radiusAngle = fmod(angle, 90.f);
    int quarter = angle / 90.f;
    float size;

    if (quarter % 2)
    {
        size = rectangle.getSize().x / sin(DEGREE(radiusAngle));
    }
    else
    {
        size = rectangle.getSize().y / sin(DEGREE(radiusAngle));
    }
    sf::Vector2f rectangleCenter = getCenterObj();
    float newX_AxisRectangle = rectangleCenter.x - (rectangleCenter.y / tan(DEGREE(radiusAngle)));
    sf::Vector2f rectangleX(newX_AxisRectangle - size / 2, newX_AxisRectangle + size / 2);
    return rectangleX;
}
sf::Vector2f Rectangle::getThrowY_Axis(float angle)
{
    float radiusAngle = fmod(angle, 90.f);
    int quarter = angle / 90.f;
    float size;
    if (quarter % 2)
    {
        size = rectangle.getSize().y / sin(DEGREE(radiusAngle));
    }
    else
    {
        size = rectangle.getSize().x / sin(DEGREE(radiusAngle));
    }
    sf::Vector2f rectangleCenter = getCenterObj();
    float newY_AxisRectangle = rectangleCenter.y + (rectangleCenter.x / tan(DEGREE(radiusAngle)));
    sf::Vector2f rectangleY(newY_AxisRectangle - size / 2, newY_AxisRectangle + size / 2);
    return rectangleY;
}

float Rectangle::getAngle(){
    return rectangle.getRotation();
}
// pozostałe metody
void Rectangle::rotate(float input)
{
    rectangle.rotate(input);
}
