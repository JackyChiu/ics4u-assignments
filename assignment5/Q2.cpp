#include <iostream>

using namespace std;

class Position
{
    friend ostream &operator<<(ostream&,Position&);
public:
    Position(int=0);
    int getposition();
    void setposition(int);
protected:
    int p;
};

Position::Position(int position)
{
    p=position;
}

int Position::getposition()
{
    return p;
}

void Position::setposition(int position)
{
    p=position;
}

ostream &operator<<(ostream &cout,Position &b)
{
    cout<<b.p;
    return cout;
}

class Velocity:public Position
{
    friend ostream &operator<<(ostream&,Velocity&);
public:
    Velocity(int=0,int=0);
    int getvelocity();
    void setvelocity(int);
    void origin();
protected:
    int v;
};

Velocity::Velocity(int velocity,int position)
{
    v=velocity;
    setposition(position);
}

int Velocity::getvelocity()
{
    return v;
}

void Velocity::setvelocity(int velocity)
{
    v=velocity;
}

void Velocity::origin()
{
    if(v*p>0)
    {
        cout<<"away form origin";
    }
    
    else
    {
        cout<<"towards origin";
    }
}

ostream &operator<<(ostream &cout,Velocity &b)
{
    cout<<b.v;
    return cout;
}

class Acceleration:public Velocity
{
    friend ostream &operator<<(ostream&,Acceleration&);
public:
    Acceleration(int=0,int=0,int=0);
    int getacceleration();
    void setacceleration(int);
    void speeding();
    
protected:
    int a;
};

Acceleration::Acceleration(int acceleration,int velocity,int position)
{
    a=acceleration;
    setvelocity(velocity);
    setposition(position);
}

int Acceleration::getacceleration()
{
    return a;
}

void Acceleration::setacceleration(int acceleration)
{
    a=acceleration;
}

void Acceleration::speeding()
{
    if(a*v>0)
    {
        cout<<"speeding up";
    }
    
    else
    {
        cout<<"slowing down";
    }
}

ostream &operator<<(ostream &cout,Acceleration &b)
{
    cout<<b.a;
    return cout;
}

int main()
{
    Acceleration A(2,3,5);
    
    cout<<"The position is "<<A.getposition()<<endl;
    cout<<"The velocity is "<<A.getvelocity()<<endl;
    cout<<"The acceleration is "<<A.getacceleration()<<endl;
    
    cout<<"The object is moving ";
    A.origin();
    cout<<" and ";
    A.speeding();
    cout<<endl;
    
    return 0;
}
