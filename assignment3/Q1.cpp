#include <iostream>

using namespace std;

class Combinatorics
{
public:
    Combinatorics();
    void setvalue(int,int);
    void all_combination();
    void next_combination();
    
private:
    int factorial(int);
    int total_comb(int,int);
    int n;
    int r;
    int i;
    int a[];
};

Combinatorics::Combinatorics()
{
    n=1;
    r=0;
    i=0;
    for(int x=0;x<r;x++)
    {
        a[x]=0;
    }
}

void Combinatorics::setvalue(int nn,int rr)
{
    n=nn;
    r=rr;
    i=r-1;
    for(int x=0;x<r;x++)
    {
        a[x]=x+1;
    }
}

int Combinatorics::factorial(int x)
{
    int factorial=1;
    
    for(int a=1;a<=x;a++)
    {
        factorial=factorial*a;
    }
    return factorial;
}

int Combinatorics::total_comb(int nn,int rr)
{
    int total_comb=0;
    total_comb=(factorial(nn)/(factorial(rr)*(factorial(nn-rr))));
    return total_comb;
}

void Combinatorics::all_combination()
{
    r--;
    for(int x=0;x<r;x++)
    {
        cout<<a[x]<<", ";
    }
    cout<<a[r]<<endl;
    
    for(int b=1;b<total_comb(n,r);b++)
    {
        next_combination();
    }
}

void Combinatorics::next_combination()
{
    while(a[i]==(n-r+i))
    {
        i--;
    }
    a[i]++;
    
    for(int j=i+1;j<=r;j++)
    {
        a[j]=a[i]+j-i;
    }
    
    for(int x=0;x<r;x++)
    {
        cout<<a[x]<<", ";
    }
    cout<<a[r]<<endl;
}

int main()
{   int nn,rr;
    
    cin>>nn;
    cin>>rr;
    
    Combinatorics x;
    x.setvalue(nn,rr);
    x.all_combination();
}
