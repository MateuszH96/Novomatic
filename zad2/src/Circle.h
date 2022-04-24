#ifndef CIRCLE_H
#define CIRCLE_H
#include <SFML/Graphics.hpp>
#include <cmath>
#define DEGREE(INPUT) (M_PI * INPUT / 180.f) //zamiana kąta w stopniach na radiany 30°=π/6
class Circle
{
private:
    sf::CircleShape circle;
public:
    Circle(float radius=1.f);
    void setCenterPoint();
    void setPosition(float x,float y);
    void setColor(sf::Color color);
    float getRadius();
    sf::Vector2f getCenterObj();
    sf::CircleShape getCircle();
    sf::Vector2f getThrowX_Axis(float angle);
    sf::Vector2f getThrowY_Axis(float angle);
};

#endif