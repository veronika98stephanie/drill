#include <iostream>
#include <cmath>

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
    int *getXY();
    void setXY (int x, int y);
    string toString();
    double distance(int x, int y);
    double distance(MyPoint &another);
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

int *MyPoint::getXY()
{
    int *arr;
    arr = new int[2];
    arr[0] = this->x;
    arr[1] = this->y;
    return arr;
}

void MyPoint::setXY (int x, int y)
{
    this->x = x;
    this->y = y;
}
string MyPoint::toString()
{
    return "(" + to_string(x) + "," + to_string(y) + ")";
}

double MyPoint::distance(int x, int y)
{
    return sqrt(pow((this->x)-x,2)+pow((this->y)-y,2));
}

double MyPoint::distance(MyPoint &another)
{
    return MyPoint::distance(another.x, another.y);
}

double MyPoint::distance()
{

}


int main()
{
    MyPoint one (1,2);
    cout << one.getX() << endl;
    cout << one.getY() << endl;
    cout << one.distance (3,4);
    MyPoint two (3,7);
    cout << one.distance (two);

    return 0;
}
