#include <iostream>

using namespace std;

bool check(int);

int main() {
    
    int input;
    
    cin>>input;
    int next=input+1;
    
    
    while(check(next)==false)
    {
        next++;
    }
    
    cout<<next<<endl;
    
    return 0;
}

bool check(int input)
{
    int a[4];
    int count=0;
    int temp;
    if(input<10)
    {
        return true;
    }
    a[0]=input/1000;
    a[1]=input/100%10;
    a[2]=input/10%10;
    a[3]=input%10;
    
    for(int x=0;x<=3;x++)
    {
        if(a[0]==0)
        {
            count++;
            for(int y=0;y<=3;y++)
            {
                temp=a[y];
                a[y]=a[y+1];
                a[y+1]=temp;
            }
        }
    }
    if(count==0)
    {
        if(a[0]!=a[1]&&a[0]!=a[2]&&a[0]!=a[3]&&a[1]!=a[3]&&a[2]!=a[3]&&a[1]!=a[2])
        {
            return true;
        }
    }
    if(count==1)
    {
        if(a[0]!=a[1]&&a[0]!=a[2]&&a[1]!=a[2])
        {
            return true;
        }
    }
    if(count==2)
    {
        if(a[0]!=a[1])
        {
            return true;
        }
    }
    return false;
}
