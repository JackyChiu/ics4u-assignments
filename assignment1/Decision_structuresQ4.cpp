#include <iostream>
using namespace std;

int cool(int,int);

int main() {
    
    int a,b;
    
    cin>>a;
    cin>>b;
    
    cout<<cool(a,b)<<endl;
    
    return 0;
}

int cool(int a, int b)
{
    bool s=false;
    bool c=false;
    int number=0;
    
    for(int i=a;i<=b;i++)
    {
        s=false;
        c=false;
        for(int x=0;x<=i;x++)
        {
            if((x*x)==i)
            {
                s=true;
            }
            if((x*x*x)==i)
            {
                c=true;
            }
        }
        
        if(s==true&&c==true)
        {
            number++;
        }
        
    }
    return number;
}
