#include <iostream>
#include "line1.h"
#include <cmath>
using namespace std;
line1::line1(point1 p1, point1 p2)
{
    this->point11 = p1;
    this->point2 = p2;
}
line1::line1(line1 &l)
{
    this->point11 = l.point11;
    this->point2 = l.point2;
}

void line1::setPoint1(double x, double y)
{
    this->point11.setpointX(x);
    this->point11.setpointY(y);
}

void line1::setPoint2(double x, double y)
{
    this->point2.setpointX(x);
    this->point2.setpointY(y);
}

double line1::Distance()
{
    double distance;

    distance = pow(pow(this->point2.getpointX() - this->point11.getpointX(), 2) + pow(this->point2.getpointY() - this->point11.getpointY(), 2), 0.5);

    return distance;
}

double line1::Slope()
{
    double slope;

    slope = (this->point2.getpointY() - this->point11.getpointY()) / (this->point2.getpointX() - this->point11.getpointX());

    return slope;
}

void line1::setline1(double x1, double y1, double x2, double y2)
{
    this->setPoint1(x1, y1);
    this->setPoint2(x2, y2);
}
point1 line1::getPoint1()
{
    return this->point11;
}
point1 line1::getPoint2()
{
    return this->point2;
}

bool line1::equalTo()
{
    if (this->point11.getpointX() == this->point2.getpointX() && this->point11.getpointY() == this->point2.getpointY())
    {
        return true;
    }
    else
    {
        return false;
    }
}
std::ostream &operator<<(std::ostream &s, line1 &l)
{
    return s << "((" << l.getPoint1().getpointX() << "," << l.getPoint1().getpointY() << ")(" << l.getPoint2().getpointX() << "," << l.getPoint2().getpointY() << "))";
}

istream &operator>>(istream &in, line1 &l)
{
    cout << "Enter X and Y co-ordinates for Point 1 and Point 2\n";
    double x, y;
    in >> x;
    in >> y;
    double x1, y1;
    in >> x1;
    in >> y1;
    l.setline1(x, y, x1, y1);
    return in;
}