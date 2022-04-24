#include "IsColliding.h"
bool IsColliding::isColliding(Trinagle t1, Trinagle t2)
{
    return (isPointInside(t1, t2) || isPointInside(t2, t1));
}
float IsColliding::triangleSquare(Vec2 a, Vec2 b, Vec2 c)
{
    float part1 = b.getX() - a.getX();
    float part2 = c.getY() - a.getY();
    float part3 = b.getY() - a.getY();
    float part4 = c.getX() - a.getX();
    return abs((part1 * part2) - (part3 * part4)) / 2;
}
bool IsColliding::isPointInside(Trinagle t1, Trinagle t2)
{
    const int size = 3;
    const float offset = 0.001f;
    float triangleSquareT1 = triangleSquare(t1[0], t1[1], t1[2]);
    for (int i = 0; i < size; i++)
    {
        float newTriangle = 0.f;
        for (int j = 0; j < size; j++)
        {
            newTriangle += triangleSquare(t2[i], t1[j], t1[(j + 1) % size]);
        }
        if (abs(newTriangle - triangleSquareT1) < offset)
        {
            return true;
        }
    }
    return false;
}