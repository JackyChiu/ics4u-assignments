#include <iostream>

using namespace std;

int termsa(int);
int termsb(int);
int termsc(int);

int main() {
    
    int n1,n2,n3;
    cout<<"Enter your terms for funtion a,b,c"<<endl;
    cin>>n1;
    cin>>n2;
    cin>>n3;
    cout<<termsa(n1)<<endl;
    cout<<termsb(n2)<<endl;
    cout<<termsc(n3)<<endl;
    
    return 0;
}

int termsa(int n)
{
    if(n==1)
    {
        return 5;
    }
    
    else
    {
        return termsa(n-1)+1;
    }
}

int termsb(int n)
{
    if(n==1)
    {
        return 80;
    }
    
    else
    {
        return termsb(n-1)/2;
    }
}

int termsc(int n)
{
    if(n==1)
    {
        return 3;
    }
    if(n==2)
    {
        return 5;
    }
    else
    {
        return termsc(n-2)+termsc(n-1);
    }
}
