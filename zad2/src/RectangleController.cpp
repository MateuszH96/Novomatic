#include "RectangleController.h"

RectanleController::RectanleController(Rectangle *rectangle){
    this->rectangle=new Rectangle;
    this->rectangle=rectangle;
}

void RectanleController::rotateRectangle()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
    {
        rectangle->rotate(-0.1f);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
    {
        rectangle->rotate(0.1f);
    }
}
RectanleController::~RectanleController(){
    rectangle=NULL;
    delete rectangle;
}