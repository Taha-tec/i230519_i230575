#include "Point.h"

Point::Point() :x(0), y(0)
{
}

Point::Point(int x, int y) :x(x), y(y)
{
}

//Setters

void Point::setX(int x) {
    this->x = x;
}
void Point::setY(int y) {
    this->y = y;
}
//Return value of x
int Point::getX()
{
    return x;
}

//Return value of y
int Point::getY()
{
    return y;
}
void Point::fun()
{
}
