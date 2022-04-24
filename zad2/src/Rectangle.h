#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <SFML/Graphics.hpp>
#include <cmath>
#define DEGREE(INPUT) (M_PI * INPUT / 180.f) //zamiana kąta w stopniach na radiany 30°=π/6
class Rectangle
{
private:
    sf::RectangleShape rectangle;
public:
    Rectangle(float width=1.f,float hight=1.f);
    
    void setCenterPoint();
    void setPosition(float x,float y);
    void setColor(sf::Color color);
    float getRadius();
    float getAngle();
    sf::Vector2f getCenterObj();
    sf::RectangleShape getRectangle();
    float getWidth();
    float getHight();
    sf::Vector2f getThrowX_Axis(float angle);
    sf::Vector2f getThrowY_Axis(float angle);
    
    void rotate(float input=0.1f);
};

#endif