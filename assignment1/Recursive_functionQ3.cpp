#include <iostream>

using namespace std;

void check(int,int);

int main() {
    
    int x;
    int n;
    cout<<"Enter your number"<<endl;
    cin>>n;
    x=n-1;
    
    check(n,x);
    
    return 0;
}

void check(int n,int x)
{
    if(x==1)
    {
        cout<<n<<" is a prime number"<<endl;
    }
    else
    {
        if(n%x==0)
        {
            cout<<n<<" is not a prime number"<<endl;
        }
        else
        {
            check(n,x-1);
        }
    }
}
