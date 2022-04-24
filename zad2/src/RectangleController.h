#ifndef RECTANGLE_CONTROLLER_H
#define RECTANGLE_CONTROLLER_H
#include "Rectangle.h"
class RectanleController
{
private:
    Rectangle *rectangle;
public:
    RectanleController(Rectangle *rectangle);
    void rotateRectangle();
    ~RectanleController();
};


#endif