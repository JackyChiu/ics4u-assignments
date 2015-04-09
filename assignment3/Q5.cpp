#include<iostream>
#include<string>

using namespace std;

class Momentum
{
public:
    Momentum();
    void givevalue(double,double,double);
    double Momentumvalue();
    double Massvalue();
    double Velocityvalue();
    
private:
    double momentum;
    double mass;
    double velocity;
};

Momentum::Momentum()
{
    momentum=0;
    mass=0;
    velocity=0;
}

void Momentum::givevalue(double m, double v,double p)
{
    momentum=p;
    mass=m;
    velocity=v;
}

double Momentum::Momentumvalue()
{
    momentum=mass*velocity;
    return momentum;
}

double Momentum::Massvalue()
{
    mass=momentum/velocity;
    return mass;
}

double Momentum::Velocityvalue()
{
    velocity=momentum/mass;
    return velocity;
}


int main()
{
    Momentum M;
    double m,v,p;
    string input;
    
    cout<<"Which value are you solving for? ";
    getline(cin,input);
    
    if(input=="mass")
    {
        cout<<"Enter momentum ";
        cin>>p;
        
        cout<<"Enter velocity ";
        cin>>v;
        
        M.givevalue(0,v,p);
        cout<<"The mass is "<<M.Massvalue()<<" kg"<<endl;
    }
    
    if(input=="velocity")
    {
        cout<<"Enter momentum ";
        cin>>p;
        
        cout<<"Enter mass ";
        cin>>m;
        
        M.givevalue(m,0,p);
        cout<<"The velocity is "<<M.Velocityvalue()<<" m/s"<<endl;
    }
    
    if(input=="momentum")
    {
        cout<<"Enter mass ";
        cin>>m;
        
        cout<<"Enter velocity ";
        cin>>v;
        
        M.givevalue(m,v,0);
        
        cout<<"The momentum is "<<M.Momentumvalue()<<" kg*m/s"<<endl;
    }
    
    return 0;
}
