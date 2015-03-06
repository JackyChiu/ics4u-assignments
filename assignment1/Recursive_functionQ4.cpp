#include <iostream>

using namespace std;

int f(int,int,int);

int main() {
    
    int n,x,y;
    cout<<"Enter your fractorial"<<endl;
    cin>>n;
    x=1;
    y=1;
    
    cout<<"Fractorial("<<n<<") is "<<f(n,x,y)<<endl;
    
    return 0;
}

int f(int n,int x,int y)
{
    
    
    if(n+1==y)
    {
        return x;
    }
    else
    {
        if(x%y==0)
        {
            return f(n,x,y+1);
        }
        else
        {
            y=1;
            return f(n,x+1,y);
        }
        
    }
    return 0;
}
