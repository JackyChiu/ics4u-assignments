#include <iostream>

using namespace std;

class Factorial
{
    friend istream &operator>>(istream&, Factorial&);
    friend ostream &operator<<(ostream&, Factorial&);
public:
    Factorial(int=0);
    void givevalue();
    Factorial operator+(Factorial);
    Factorial operator-(Factorial);
    Factorial operator*(Factorial);
    Factorial operator/(Factorial);
    Factorial operator%(Factorial);
    Factorial operator=(Factorial);
    Factorial operator++();
    Factorial operator--();
    
    bool operator<(Factorial);
    bool operator>(Factorial);
    bool operator<=(Factorial);
    bool operator>=(Factorial);
    bool operator==(Factorial);
    bool operator!=(Factorial);
    
private:
    int input;
    int factorial;
};

Factorial::Factorial(int num)
{
    input=num;
    factorial=0;
    givevalue();
}

void Factorial::givevalue()
{
    factorial=1;
    
    for(int x=1;x<=input;x++)
    {
        factorial=factorial*x;
    }
}

Factorial Factorial::operator+(Factorial b)
{
    Factorial temp;
    temp.factorial=factorial+b.factorial;
    return temp;
}

Factorial Factorial::operator-(Factorial b)
{
    Factorial temp;
    temp.factorial=factorial-b.factorial;
    return temp;
}

Factorial Factorial::operator*(Factorial b)
{
    Factorial temp;
    temp.factorial=factorial*b.factorial;
    return temp;
}

Factorial Factorial::operator/(Factorial b)
{
    Factorial temp;
    temp.factorial=factorial/b.factorial;
    return temp;
}

Factorial Factorial::operator%(Factorial b)
{
    Factorial temp;
    temp.factorial=factorial%b.factorial;
    return temp;
}

Factorial Factorial::operator=(Factorial b)
{
    factorial=b.factorial;
    return *this;
}

Factorial Factorial::operator++()
{
    givevalue();
    factorial++;
    return *this;
}

Factorial Factorial::operator--()
{
    givevalue();
    factorial--;
    return *this;
}

bool Factorial::operator<(Factorial b)
{
    return (factorial<b.factorial);
}

bool Factorial::operator>(Factorial b)
{
    return (factorial>b.factorial);
}

bool Factorial::operator<=(Factorial b)
{
    return (factorial<=b.factorial);
}

bool Factorial::operator>=(Factorial b)
{
    return (factorial>=b.factorial);
}

bool Factorial::operator==(Factorial b)
{
    return (factorial==b.factorial);
}

bool Factorial::operator!=(Factorial b)
{
    return (factorial!=b.factorial);
}

istream &operator>>(istream & cin, Factorial & b)
{
    cin>>b.input;
    b.givevalue();
    return cin;
}

ostream &operator<<(ostream & cout, Factorial &b)
{
    cout<<b.factorial;
    return cout;
}

int main()
{
    Factorial A(5);
    Factorial B(8);
    Factorial C;
    
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
