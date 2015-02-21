#include <iostream>
using namespace std;

void pointdeductor(int,int);

int apoints=100;
int dpoints=100;

int main() {
    
    int t;
    int a,b=0;
    
    cout<<"Enter number of turns:";
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        cin>>a;
        cin>>b;
        pointdeductor(a,b);
    }
    
    cout<<apoints<<endl;
    cout<<dpoints<<endl;
    return 0;
}

void pointdeductor(int a,int b)
{
    if(a>b)
    {
        dpoints=dpoints-a;
    }
    
    if(a<b)
    {
        apoints=apoints-b;
    }
    
    if(a==b)
    {
        
    }
    
}
