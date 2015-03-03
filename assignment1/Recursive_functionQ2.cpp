#include <iostream>

using namespace std;

int sum(int);

int main() {
    
    int n;
    cout<<"Enter your number"<<endl;
    cin>>n;
    cout<<sum(n)<<endl;
    
    return 0;
}

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (n%10)+sum(n/10);
    }
}
