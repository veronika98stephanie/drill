#include <iostream>

using namespace std;

class MyPoint
{
    int x;
    int y;
public:
    MyPoint();
    MyPoint(int x, int y);
    int getX();
    void setX (int x);
    int getY();
    void setY (int y);
    int getXY();
    void setXY (int x, int y);
    string toString();
    double distance(int x, int y);
    double distance(MyPoint another);
    double distance();
};

MyPoint::MyPoint()
{
    x = 0;
    y = 0;
}

MyPoint::MyPoint(int x, int y)
{
    this->x = x;
    this->y = y;
}

int MyPoint::getX()
{
    return x;
}

void MyPoint::setX (int x)
{
    this->x = x;
}

int MyPoint::getY()
{
    return y;
}

void MyPoint::setY (int y)
{
    this->y = y;
}

int MyPoint::getXY()
{
    int *arr;
    arr = new MyPoint[2];
    return *arr;
}

void MyPoint::setXY (int x, int y)
{
    this->x = x;
    this->y = y;
}
string toString()
{
    return "(" + x + "," + y + ")";
}

double distance(int x, int y)
{

}
    double distance(MyPoint another);
    double distance();


int main()
{

    return 0;
}
