#include <iostream>
#include<math.h>

using namespace std;

class Octal
{
    friend istream &operator>>(istream&,Octal&);
    friend ostream &operator<<(ostream&,Octal&);
public:
    Octal(int=0);
    void readvalue();
    Octal operator+(Octal);
    Octal operator-(Octal);
    Octal operator*(Octal);
    Octal operator/(Octal);
    
    bool operator<(Octal);
    bool operator>(Octal);
    bool operator>=(Octal);
    bool operator<=(Octal);
    
private:
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
    int i=0; //counter for exponent
    int tempvalue; //temp value for total exponent
    int tempinput; //temp vlaue for octal
    
    tempinput=input;
    
    while(tempinput>0)
    {
        tempvalue=1;
        
        for(int j=0;j<i;j++)
        {
            tempvalue=tempvalue*8;
        }
        
        value=value+(tempvalue*(tempinput%10));
        
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

void Octal::octalvalue()
{
    output=0;
    int ovalue=value;
    int temp=10; //decimals exponet value
    int i=0; //decimals exponet number
    
    while(ovalue>0)
    {
        output=output+(pow(temp,i)*(ovalue%8));
        ovalue=ovalue/8;
        i++;
    }
}

istream &operator>>(istream& cin,Octal& b)
{
    cin>>b.input;
    return cin;
}

ostream &operator<<(ostream& cout,Octal& b)
{
    cout<<b.output;
    return cout;
}


int main()
{
    Octal A(112);
    Octal B(31);
    Octal C;
    
    cout<<A<<endl;
    cout<<B<<endl;
    
    C=A+B;
    cout<<C<<endl;
    
    C=A-B;
    cout<<C<<endl;
    
    C=A*B;
    cout<<C<<endl;
    
    C=A/B;
    cout<<C<<endl;
    
}