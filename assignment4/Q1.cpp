#include <iostream>
#include<math.h>

using namespace std;

class Octal
{
    friend istream &operator>>(istream&,Octal&);
    friend ostream &operator<<(ostream&,Octal&);
public:
    Octal(int=0);
    Octal operator+(Octal);
    Octal operator-(Octal);
    Octal operator*(Octal);
    Octal operator/(Octal);
    Octal operator++();
    Octal operator--();
    
    bool operator<(Octal);
    bool operator>(Octal);
    bool operator>=(Octal);
    bool operator<=(Octal);
    bool operator==(Octal);
    bool operator!=(Octal);
    
private:
    void readvalue();
    void octalvalue();
    int input;
    int value;
    int output;
};

Octal::Octal(int o)
{
    input=o;
    output=o;
    value=0;
    readvalue();
}

void Octal::readvalue()
{
    value=0;
    int i=0; //counter for exponent
    int tempinput=0; //temp vlaue for octal
    
    tempinput=input;
    
    while(tempinput!=0)
    {
        value=value+(pow(8,i)*(tempinput%10));
        
        tempinput=tempinput/10;
        i++;
    }
}

Octal Octal::operator+(Octal b)
{
    Octal temp;
    temp.value=value+b.value;
    temp.octalvalue();
    return temp;
}

Octal Octal::operator-(Octal b)
{
    Octal temp;
    temp.value=value-b.value;
    temp.octalvalue();
    return temp;
}

Octal Octal::operator*(Octal b)
{
    Octal temp;
    temp.value=value*b.value;
    temp.octalvalue();
    return temp;
}

Octal Octal::operator/(Octal b)
{
    Octal temp;
    temp.value=value/b.value;
    temp.octalvalue();
    return temp;
}

bool Octal::operator<(Octal b)
{
    return (value<b.value);
}

bool Octal::operator>(Octal b)
{
    return (value>b.value);
}

bool Octal::operator<=(Octal b)
{
    return (value<=b.value);
}

bool Octal::operator>=(Octal b)
{
    return (value>=b.value);
}

bool Octal::operator==(Octal b)
{
    return (value==b.value);
}

bool Octal::operator!=(Octal b)
{
    return (value!=b.value);
}

Octal Octal::operator++()
{
    readvalue();
    value=value+1;
    octalvalue();
    return *this;
}

Octal Octal::operator--()
{
    readvalue();
    value=value-1;
    octalvalue();
    return *this;
}

void Octal::octalvalue()
{
    output=0;
    int temp=value;
    int i=0; //decimals exponet number
    
    while(temp!=0)
    {
        output=output+(pow(10,i)*(temp%8));
        temp=temp/8;
        i++;
    }
}

istream &operator>>(istream& cin,Octal& b)
{
    cin>>b.input;
    b.output=b.input;
    return cin;
}

ostream &operator<<(ostream& cout,Octal& b)
{
    cout<<b.output;
    return cout;
}


int main()
{
    Octal A(2);
    Octal B(7);
    Octal C;
    
    cout<<"Enter C: ";
    cin>>C;
    cout<<"C: "<<C<<endl;
    
    ++C;
    cout<<"C: "<<C<<endl;
    
    --C;
    cout<<"C: "<<C<<endl;
    
    cout<<"C: "<<C<<endl;
    cout<<"A: "<<A<<endl;
    cout<<"B: "<<B<<endl;
    
    C=A+B;
    cout<<"Sum: "<<C<<endl;
    
    C=A-B;
    cout<<"Difference: "<<C<<endl;
    
    C=A*B;
    cout<<"Product: "<<C<<endl;
    
    C=A/B;
    cout<<"Quoient: "<<C<<endl;
    
    if(A>B)
    {
        cout<<"A is greater than B"<<endl;
    }
    
    if(A<B)
    {
        cout<<"B is greater than A"<<endl;
    }
    
    if(A>=B)
    {
        cout<<"A is greater than or equal to B"<<endl;
    }
    
    if(A<=B)
    {
        cout<<"B is greater than or equal to A"<<endl;
    }
    
    if(A==B)
    {
        cout<<"A and B equal"<<endl;
    }
    
    if(A!=B)
    {
        cout<<"A and B not equal"<<endl;
    }
}