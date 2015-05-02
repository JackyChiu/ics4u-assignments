#include <iostream>

using namespace std;

class Point
{
    friend ostream &operator<<(ostream&,Point&);
public:
    Point(int=0,int=0);
    virtual void setPoint(int,int);
    int gety() {return x;};
    int getx() {return y;};
protected:
    int x;
    int y;
};

Point::Point(int inputx,int inputy)
{
    x=inputx;
    y=inputy;
}

void Point::setPoint(int a,int b)
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
    void setBase(int);
    int getbase() {return base;};
    int area();
protected:
    int base;
};

Square::Square(int b,int x,int y)
{
    base=b;
    Point::setPoint(x,y);
}

void Square::setBase(int b)
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
    void setLength(int);
    int getlength() {return length;};
    int area();
    int volume();
protected:
    int length;
};

Cube::Cube(int l,int x,int y)
{
    length=l;
    setBase(l);
    setPoint(x,y);
}

void Cube::setLength(int l)
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
    Cube C(5,7,8);
    
    cout<<"X-cord is "<<C.getx()<<endl;
    cout<<"Y-cord is "<<C.gety()<<endl;
    cout<<"Base is "<<C.getbase()<<endl;
    cout<<"Length is "<<C.getlength()<<endl;
    
    
    C.setLength(10);
    C.setBase(4);
    C.setPoint(2,2);
    
    cout<<"Area is "<<C.area()<<endl;
    cout<<"Volume is "<<C.volume()<<endl;
    
    
    return 0;
}
