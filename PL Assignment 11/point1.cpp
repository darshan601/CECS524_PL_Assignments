#ifndef Point1_H
#define Point1_H
#include "point1.h"

point1::point1() {}

point1::point1(point1 &p1)
{
    this->x = p1.x;
    this->y = p1.y;
}
point1::point1(double x1, double y1)
{
    this->x = x1;
    this->y = y1;
}
double point1::getpointX()
{
    return this->x;
}
double point1::getpointY()
{
    return this->y;
}
void point1::setpointX(double PX)
{
    this->x = PX;
}
void point1::setpointY(double PY)
{
    this->y = PY;
}
#endif