#include <iostream>

using namespace std;

class Combinatorics
{
public:
    Combinatorics();
    void setvalue(int,int);
    void allcombination();
    void triangle(int);
    
private:
    int factorial(int);
    int total_comb(int,int);
    int n;
    int r;
    int check;
    int combination[];
};

Combinatorics::Combinatorics()
{
    n=1;
    r=0;
    check=0;
    for(int x=0;x<=r;x++)
    {
        combination[x]=x;
    }
}

void Combinatorics::setvalue(int nn,int rr)
{
    n=nn;
    r=rr;
    check=r;
    
    for(int a=1;a<=r;a++)
    {
        combination[a]=a;
    }
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

int Combinatorics::total_comb(int nn,int rr)
{
    int total_comb=0;
    total_comb=(factorial(nn)/(factorial(rr)*(factorial(nn-rr))));
    return total_comb;
}

void Combinatorics::allcombination()
{
    for(int a=1;a<=r-1;a++)
    {
        cout<<combination[a]<<", ";
    }
    cout<<combination[r]<<endl;
    
    for(int b=1;b<total_comb(n,r);b++)
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

void Combinatorics::triangle(int nn)
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

int main()
{   int nn,rr;
    
    cin>>nn;
    cin>>rr;
    
    Combinatorics x;
    x.setvalue(nn,rr);
    x.allcombination();
    x.triangle(nn);
}
