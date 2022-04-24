/*
    Zadanie wykorzystuje własność
    Jeśli suma pól trójkątów utworzonych przez wszystkie pary punktów trójkąta t1 
    oraz dowolnego punktu trójkąta t2 jest równa polu trójkąta t1,
    to punkt trójkąta p2 znajduje się wewnątrz trójkąta t1
*/
#include "Vec2.h"
#include "Trinagle.h"
#include "IsColliding.h"
int main()
{
    //***********************
    //I przypadek
    //***********************
    Vec2 v1(2.f,2.f);
    Vec2 v2(6.f,2.f);
    Vec2 v3(2.f,6.f);
    Vec2 v4(3.f,3.f);
    Vec2 v5(6.f,3.f);
    Vec2 v6(6.f,6.f);
    //***********************
    //III przypadek
    //***********************
    // Vec2 v1(5.f,1.f);
    // Vec2 v2(8.f,1.f);
    // Vec2 v3(8.f,4.f);
    // Vec2 v4(5.f,1.f);
    // Vec2 v5(8.f,1.f);
    // Vec2 v6(5.f,4.f);
    //***********************
    //IV przypadek
    //***********************
    // Vec2 v1(1.f,1.f);
    // Vec2 v2(1.f,3.f);
    // Vec2 v3(3.f,4.f);
    // Vec2 v4(1.f,1.f);
    // Vec2 v5(1.f,4.f);
    // Vec2 v6(3.f,4.f);
    //***********************
    //V przypadek
    //***********************
    // Vec2 v1(2.f,1.f);
    // Vec2 v2(4.f,1.f);
    // Vec2 v3(4.f,4.f);
    // Vec2 v4(1.f,1.f);
    // Vec2 v5(1.f,4.f);
    // Vec2 v6(3.f,4.f);
    //***********************
    //VI przypadek
    //***********************
    // Vec2 v1(0.f,0.f);
    // Vec2 v2(6.f,0.f);
    // Vec2 v3(0.f,6.f);
    // Vec2 v4(1.f,1.f);
    // Vec2 v5(1.f,3.f);
    // Vec2 v6(3.f,1.f);
    Trinagle t1(v1,v2,v3);
    Trinagle t2(v4,v5,v6);      //zakomentować dla II przypadku
    // Trinagle t2(v1.f,v2.f,v3.f);   //II przypadek 2 trójkąty jeden na drugim
    if (IsColliding::isColliding(t1,t2))
    {
        std::cout<<"Koliza"<<std::endl;
    }else
    {
        std::cout<<"Nie koliduje"<<std::endl;
    }

    return 0;
}