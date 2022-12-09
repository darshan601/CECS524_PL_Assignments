
class point1
{
private:
    double x;
    double y;

public:
    point1();
    point1(point1 &p1);
    point1(double x1, double y1);

    double getpointX();
    double getpointY();
    void setpointX(double PX);
    void setpointY(double PY);
};
