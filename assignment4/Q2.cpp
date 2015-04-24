#include <iostream>

using namespace std;

class Combinatorics
{
    friend istream &operator>>(istream&,Combinatorics&);
    friend ostream &operator<<(ostream&,Combinatorics&);
public:
    Combinatorics(int=0,int=0);
    Combinatorics operator+(Combinatorics);
    Combinatorics operator*(Combinatorics);
    Combinatorics operator=(Combinatorics);
    bool operator>(Combinatorics);
    bool operator<(Combinatorics);
    bool operator>=(Combinatorics);
    bool operator<=(Combinatorics);
    bool operator==(Combinatorics);
    bool operator!=(Combinatorics);
    void allcombination();
    void triangle();
    
private:
    int factorial(int);
    int total_comb();
    int totalcomb;
    int n;
    int r;
    int check;
    int combination[];
};

Combinatorics::Combinatorics(int nn,int rr)
{
    n=nn;
    r=rr;
    check=r;
    totalcomb=0;
    for(int a=1;a<=r;a++)
    {
        combination[a]=a;
    }
    total_comb();
}

int Combinatorics::factorial(int c)
{
    int factorial=1;
    
    for(int x=1;x<=c;x++)
    {
        factorial=factorial*x;
    }
    return factorial;
}

int Combinatorics::total_comb()
{
    int total_comb=0;
    total_comb=(factorial(n)/(factorial(r)*(factorial(n-r))));
    totalcomb=total_comb;
    return total_comb;
}

void Combinatorics::allcombination()
{
    for(int a=1;a<=r-1;a++)
    {
        cout<<combination[a]<<", ";
    }
    cout<<combination[r]<<endl;
    
    for(int b=1;b<total_comb();b++)
    {
        while(combination[check]==(n-r+check))
        {
            check--;
        }
        combination[check]++;
        for(int a=check;a<=r;a++)
        {
            combination[a]=combination[check]+a-check;
        }
        
        for(int a=1;a<=r-1;a++)
        {
            cout<<combination[a]<<", ";
        }
        cout<<combination[r]<<endl;
    }
}

void Combinatorics::triangle()
{
    cout<<"Tringle"<<endl;
    
    for(int x=0;x<n;x++)
    {
        for(int b=0;b<=x;b++)
        {
            cout<<factorial(x)/((factorial(b)*(factorial(x-b))))<<" ";
        }
        cout<<endl;
    }
}

Combinatorics Combinatorics::operator+(Combinatorics b)
{
    Combinatorics temp;
    temp.totalcomb=totalcomb+b.totalcomb;
    return temp;
}

Combinatorics Combinatorics::operator*(Combinatorics b)
{
    Combinatorics temp;
    temp.totalcomb=totalcomb*b.totalcomb;
    return temp;
}

Combinatorics Combinatorics::operator=(Combinatorics b)
{
    totalcomb=b.totalcomb;
    return *this;
}

bool Combinatorics::operator>(Combinatorics b)
{
    return (totalcomb>b.totalcomb);
}

bool Combinatorics::operator<(Combinatorics b)
{
    return (totalcomb<b.totalcomb);
}

bool Combinatorics::operator>=(Combinatorics b)
{
    return (totalcomb>=b.totalcomb);
}

bool Combinatorics::operator<=(Combinatorics b)
{
    return (totalcomb<=b.totalcomb);
}

bool Combinatorics::operator==(Combinatorics b)
{
    return (totalcomb==b.totalcomb);
}

bool Combinatorics::operator!=(Combinatorics b)
{
    return (totalcomb!=b.totalcomb);
}

istream &operator>>(istream& cin,Combinatorics& b)
{
    cin>>b.n;
    cin>>b.r;
    b.total_comb();
    return cin;
}

ostream &operator<<(ostream& cout,Combinatorics& b)
{
    cout<<b.totalcomb;
    return cout;
}

int main()
{
    Combinatorics A(5,2);
    Combinatorics B(6,3);
    Combinatorics C;
    
    cin>>C;
    cout<<"A: "<<A<<endl;
    cout<<"B: "<<B<<endl;
    cout<<"C: "<<C<<endl;
    
    C=(A+B);
    cout<<"Sum: "<<C<<endl;
    
    C=(A*B);
    cout<<"Product: "<<C<<endl;
    
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
