#include <iostream>
#include <math.h>

using namespace std;

class Point;  // 前向声明

class PointManagement
{
public:
    double getDistance(Point & a, Point & b);
};


class Point
{
public:
    Point(double xx, double yy)
    {
        x = xx;
        y = yy;
    }
    friend double PointManagement::getDistance(Point & a, Point & b);

private:
    double x, y;

};


double PointManagement::getDistance(Point & a, Point & b)
{
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);
}




int main() {

    Point a(1, 2);
    Point b(3, 4);

    PointManagement pm;

    double dis = pm.getDistance(a, b);
    cout << dis << endl;

    return 0;
}