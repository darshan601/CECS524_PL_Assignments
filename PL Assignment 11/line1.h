#include "point1.cpp"
class line1
{
private:
    point1 point11;
    point1 point2;
    /* data */
public:
    line1(/* args */);
    line1(point1 p1, point1 p2);
    line1(line1 &l);

    void setPoint1(double x, double y);

    void setPoint2(double x, double y);

    double Distance();

    double Slope();

    void setline1(double x1, double y1, double x2, double y2);

    point1 getPoint1();

    point1 getPoint2();

    bool equalTo();
};
