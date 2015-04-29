#include <iostream>

using namespace std;

class Point
{
public:
    Point(int=0,int=0);
    void setvalue(int,int);
protected:
    int x;
    int y;
};

Point::Point(int inputx,int inputy)
{
    x=inputx;
    y=inputy;
}

void Point::setvalue(int a,int b)
{
    x=a;
    y=b;
}

class Square:public Point
{
public:
    Square(int=1,int=0,int=0);
    void setvalue(int);
    int area();
protected:
    int base;
};

Square::Square(int b,int x,int y)
{
    base=b;
    Point::setvalue(x,y);
}

void Square::setvalue(int b)
{
    base=b;
}

int Square::area()
{
    return (base*base);
}

class Cube: public Square
{
public:
    Cube(int=1,int=0,int=0);
    void setvalue(int);
    int area();
    int volume();
protected:
    int length;
};

Cube::Cube(int l,int x,int y)
{
    length=l;
    Square::setvalue(l);
    Point::setvalue(x,y);
}

void Cube::setvalue(int l)
{
    length=l;
}

int Cube::area()
{
    return (6*(Square::area()));
}

int Cube::volume()
{
    return (length*Square::area());
}



