#include <iostream>

using namespace std;

void init_array(int []);
void printarray(int []);
void printarrayrecursive(int [],int);
int sum(int []);
void rsum(int [],int,int);
void largest(int [],int);
void rlargest(int [],int,int);

int main() {
    
    int a[10]={0};
    int x=9;
    int y=0;
    srand(time(0));
    
    init_array(a);
    printarray(a);
    printarrayrecursive(a,x);
    cout<<sum(a)<<endl;
    rsum(a,x,y);
    largest(a,y);
    rlargest(a,x,y);
    
    return 0;
}

void init_array(int a[])
{
    for(int x=0;x<=9;x++)
    {
        a[x]=rand()%50+1;
    }
}

void printarray(int a[])
{
    for(int x=0;x<=9;x++)
    {
        cout<<a[x]<<endl;
    }
}

void printarrayrecursive(int a[],int x)
{
    cout<<a[x]<<endl;
    if(x==0)
    {
        return ;
    }
    else
    {
        printarrayrecursive(a,x-1);
    }
}

int sum(int a[])
{
    int sum=0;
    for(int x=0;x<=9;x++)
    {
        sum=sum+a[x];
    }
    return sum;
    
}

void rsum(int a[],int x,int y)
{
    y=y+a[x];
    if(x==0)
    {
        cout<<y<<endl;
    }
    else
    {
        rsum(a,x-1,y);
    }
    
}

void largest(int a[],int y)
{
    for(int x=0;x<=9;x++)
    {
        if(a[x]>y)
        {
            y=a[x];
        }
    }
    cout<<y<<endl;
}

void rlargest(int a[],int x,int y)
{
    if(a[x]>y)
    {
        y=a[x];
    }
    
    if(x==0)
    {
        cout<<y<<endl;
    }
    else
    {
        rlargest(a,x-1,y);
    }
}
