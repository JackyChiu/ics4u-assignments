#include <iostream>

using namespace std;

class Point
{
    friend ostream &operator<<(ostream&,Point&);
public:
    Point(int=0,int=0);
    void setvalue(int,int);
    int gety() {return x;};
    int getx();
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

ostream &operator<<(ostream& cout,Point &b)
{
    cout<<b.x<<","<<b.y;
    return cout;
}

class Square:public Point
{
    friend ostream &operator<<(ostream&,Square&);
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

ostream &operator<<(ostream&cout,Square&b)
{
    cout<<b.base;
    return cout;
}

class Cube: public Square
{
    friend ostream &operator<<(ostream&,Cube&);
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

ostream &operator<<(ostream&cout,Cube&b)
{
    cout<<b.length;
    return cout;
}

int main()
{
    Cube(5,7,8);
    
    
    return 0;
}
