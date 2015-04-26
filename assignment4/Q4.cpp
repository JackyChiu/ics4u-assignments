#include <iostream>
#include <string>

using namespace std;

class ARAR
{
    friend istream &operator>>(istream&,ARAR&);
    friend ostream &operator<<(ostream&,ARAR&);
public:
    ARAR(string="1I");
    void givevalue();
    ARAR operator+(ARAR);
    ARAR operator-(ARAR);
    ARAR operator*(ARAR);
    ARAR operator/(ARAR);
    ARAR operator%(ARAR);
    ARAR operator++();
    ARAR operator--();
    
    bool operator>(ARAR);
    bool operator<(ARAR);
    bool operator>=(ARAR);
    bool operator<=(ARAR);
    bool operator==(ARAR);
    bool operator!=(ARAR);
    
private:
    string input;
    int sum;
    int c[20];
    int long length;
};

ARAR::ARAR(string s)
{
    input=s;
    sum=0;
    givevalue();
}

void ARAR::givevalue()
{
    sum=0;
    
    int long length=input.length();
    
    for(int x=0;x<length;x++)
    {
        //romans:
        if(input.substr(x,1)=="I")
        {
            c[x]=1;
        }
        if(input.substr(x,1)=="V")
        {
            c[x]=5;
        }
        if(input.substr(x,1)=="X")
        {
            c[x]=10;
        }
        if(input.substr(x,1)=="L")
        {
            c[x]=50;
        }
        if(input.substr(x,1)=="C")
        {
            c[x]=100;
        }
        if(input.substr(x,1)=="D")
        {
            c[x]=500;
        }
        if(input.substr(x,1)=="M")
        {
            c[x]=1000;
        }
        //arabric:
        if(input.substr(x,1)=="0")
        {
            c[x]=0;
        }
        if(input.substr(x,1)=="1")
        {
            c[x]=1;
        }
        if(input.substr(x,1)=="2")
        {
            c[x]=2;
        }
        if(input.substr(x,1)=="3")
        {
            c[x]=3;
        }
        if(input.substr(x,1)=="4")
        {
            c[x]=4;
        }
        if(input.substr(x,1)=="5")
        {
            c[x]=5;
        }
        if(input.substr(x,1)=="6")
        {
            c[x]=6;
        }
        if(input.substr(x,1)=="7")
        {
            c[x]=7;
        }
        if(input.substr(x,1)=="8")
        {
            c[x]=8;
        }
        if(input.substr(x,1)=="9")
        {
            c[x]=9;
        }
    }
    
    sum=c[length-1]*c[length-2];
    
    for(int long x=length-1;x>2;x=x-2)
    {
        if(c[x-2]>=c[x])
        {
            sum=sum+(c[x-2]*c[x-3]);
        }
        if(c[x-2]<c[x])
        {
            sum=sum-(c[x-2]*c[x-3]);
        }
    }
    
}

ARAR ARAR::operator+(ARAR B)
{
    ARAR temp;
    temp.sum=sum+B.sum;
    return temp;
}

ARAR ARAR::operator-(ARAR B)
{
    ARAR temp;
    temp.sum=sum-B.sum;
    return temp;
}

ARAR ARAR::operator*(ARAR B)
{
    ARAR temp;
    temp.sum=sum*B.sum;
    return temp;
}

ARAR ARAR::operator/(ARAR B)
{
    ARAR temp;
    temp.sum=sum/B.sum;
    return temp;
}

ARAR ARAR::operator%(ARAR B)
{
    ARAR temp;
    temp.sum=sum%B.sum;
    return temp;
}

ARAR ARAR::operator++()
{
    givevalue();
    sum++;
    return *this;
}

ARAR ARAR::operator--()
{
    givevalue();
    sum--;
    return *this;
}

bool ARAR::operator>(ARAR b)
{
    return (sum>b.sum);
}

bool ARAR::operator<(ARAR b)
{
    return (sum<b.sum);
}
bool ARAR::operator>=(ARAR b)
{
    return (sum>=b.sum);
}
bool ARAR::operator<=(ARAR b)
{
    return (sum<=b.sum);
}
bool ARAR::operator==(ARAR b)
{
    return (sum==b.sum);
}
bool ARAR::operator!=(ARAR b)
{
    return (sum!=b.sum);
}
istream &operator>>(istream&cin,ARAR&b)
{
    cin>>b.input;
    b.givevalue();
    return cin;
}

ostream &operator<<(ostream&cout,ARAR&b)
{
    cout<<b.sum;
    return cout;
}

int main()
{
    ARAR A("3M1D2C");
    ARAR B("2I3I2X9V1X");
    ARAR C;
    
    cin>>C;
    cout<<"A: "<<A<<endl;
    cout<<"B: "<<B<<endl;
    cout<<"C: "<<C<<endl;
    
    C=A+B;
    cout<<"Sum: "<<C<<endl;
    
    C=A-B;
    cout<<"Difference: "<<C<<endl;
    
    C=A*B;
    cout<<"Product: "<<C<<endl;
    
    C=A/B;
    cout<<"Quoient: "<<C<<endl;
    
    C=A%B;
    cout<<"Modulus: "<<C<<endl;
    
    ++A;
    cout<<"++A: "<<A<<endl;
    
    --B;
    cout<<"--B: "<<B<<endl;
    
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
    
    return 0;
}
