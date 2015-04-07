#include <iostream>
#include <string>

using namespace std;

void givevalue(string,int[]);
int sumvalue(string,int[]);


int main()
{
    string input;
    int c[20];
    
    getline(cin,input);
    
    givevalue(input,c);
    cout<<sumvalue(input,c)<<endl;
    
    
    return 0;
}

void givevalue(string input,int c[])
{
    int long length=input.length();
    
    for(int x=0;x<length;x++)
    {
        //romans:
        if(input.substr(x,1)=="I")
        {
            c[x]=1;
        }
        if(input.substr(x,1)=="V")
        {
            c[x]=5;
        }
        if(input.substr(x,1)=="X")
        {
            c[x]=10;
        }
        if(input.substr(x,1)=="L")
        {
            c[x]=50;
        }
        if(input.substr(x,1)=="C")
        {
            c[x]=100;
        }
        if(input.substr(x,1)=="D")
        {
            c[x]=500;
        }
        if(input.substr(x,1)=="M")
        {
            c[x]=1000;
        }
        //arabric:
        if(input.substr(x,1)=="0")
        {
            c[x]=0;
        }
        if(input.substr(x,1)=="1")
        {
            c[x]=1;
        }
        if(input.substr(x,1)=="2")
        {
            c[x]=2;
        }
        if(input.substr(x,1)=="3")
        {
            c[x]=3;
        }
        if(input.substr(x,1)=="4")
        {
            c[x]=4;
        }
        if(input.substr(x,1)=="5")
        {
            c[x]=5;
        }
        if(input.substr(x,1)=="6")
        {
            c[x]=6;
        }
        if(input.substr(x,1)=="7")
        {
            c[x]=7;
        }
        if(input.substr(x,1)=="8")
        {
            c[x]=8;
        }
        if(input.substr(x,1)=="9")
        {
            c[x]=9;
        }
    }
}

int sumvalue(string input,int c[])
{
    int sum=0;
    int long length=input.length();
    
    sum=c[length-1]*c[length-2];
    
    for(int long x=length-1;x>2;x=x-2)
    {
        if(c[x-2]>=c[x])
        {
            sum=sum+(c[x-2]*c[x-3]);
        }
        if(c[x-2]<c[x])
        {
            sum=sum-(c[x-2]*c[x-3]);
        }
    }
    
    return sum;
    
}
