#include <iostream>
#include "line1.cpp"
#include "point1.cpp"

using namespace std;

int main()
{
    point1 p1(10.0, 3.0);
    point1 p2(11.0, 3.0);
    line1 l1(p1, p2);

    point1 p3(p1);
    point1 p4(p2);
    line1 l2(p3, p4);
    cout << "line 1: " << l1;
    cout << "\nline 2 : " << l2 << "\n";
    // cout << l1.getPoint1().getpointX() << "\n";
    cout << "Distance : " << l1.Distance() << "\n";
    cout << "Slope : " << l1.Slope() << "\n";
    cout << "if both points are Equal (1 for true, 0 for False) : " << l1.equalTo() << "\n";
    // cout << ""l1 << endl;
    cin >> l1;
    cout << "New Line : " << l1 << endl;
    return 0;
}