#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "RectangleController.h"
#include "CircleRectangleCollision.h"
#define RADIUS (60.f)
#define WIDTH_WIN (800)
#define HIGHT_WIN (600)
#define WIDTH_RECT (400.f)
#define HIGHT_RECT (50.f)
#define WINDOW_NAME ("Hello NOVOMATIC")
#define OFFSET_X (135.f)
#define ROTATE (0.1f)

int main(){
    sf::RenderWindow window(sf::VideoMode(WIDTH_WIN, HIGHT_WIN), WINDOW_NAME);
    
    Circle circle(RADIUS);
    circle.setCenterPoint();
    circle.setPosition(WIDTH_WIN/2,HIGHT_WIN/2);

    Rectangle rectangle(WIDTH_RECT,HIGHT_RECT);
    rectangle.setCenterPoint();
    rectangle.setPosition(
        WIDTH_WIN/2+OFFSET_X,
        HIGHT_WIN/2
    );
    RectanleController rectanleController(&rectangle);
    CircleRectangleCollision circleRectangleCollision(&circle,&rectangle);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        rectanleController.rotateRectangle();
        if (circleRectangleCollision.isCollide())
        {
            circle.setColor(sf::Color(150,0,0));
            rectangle.setColor(sf::Color(100,0,0));
        }else{
            circle.setColor(sf::Color(0,150,0));
            rectangle.setColor(sf::Color(0,100,0));
        }
        
        window.clear();
        window.draw(circle.getCircle());
        window.draw(rectangle.getRectangle());
        window.display();
    }
    return 0;
}