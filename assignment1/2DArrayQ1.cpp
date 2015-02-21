//////////
//new
/////////
#include <iostream>

using namespace std;

void random(int [][5]);
void printarray(int [][5]);
void rprintarray(int [][5],int,int);
void diagonal(int [][5]);
void sum(int [][5]);
void rsum(int [][5],int,int,int);
//void sumrow(int [][5],int,int);

int main() {
    
    int a[5][5];
    int p1=0,p2=0,s=0;
    random(a);
    cout<<endl;
    printarray(a);
     cout<<endl;
    rprintarray(a,p1,p2);
    cout<<endl;
    diagonal(a);
    cout<<endl;
    sum(a);
    cout<<endl;
    rsum(a,p1,p2,s);
       return 0;
}

void random(int a[][5])
{
    for(int x=0;x<=4;x++)
    {
        for(int y=0;y<=4;y++)
        {
            a[x][y]=rand()%100+1;
        }
    }
}

void printarray(int a[][5])
{
    for(int x=0;x<=4;x++)
    {
        for(int y=0;y<=4;y++)
        {
            cout<<a[x][y]<<" ";
        }
        cout<<endl;
    }
}

void rprintarray(int a[][5],int p1,int p2)
{
    cout<<a[p1][p2]<<" ";
    
    if(p1==4&&p2==4)
    {
        cout<<endl;
        return;
    }
        else
        {
            if(p2==4)
            {
                cout<<endl;
                rprintarray(a,p1+1,0);
            }
            else
            {
                rprintarray(a,p1,p2+1);
            }
        }
}

void diagonal(int a[][5])
{
    int s=0;
    
    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=4;j++)
        {
            for(int k=0;k<=s;k++)
            {
                cout<<" ";
            }
            if(i==j)
            {
                cout<<a[i][j]<<endl;
            }
        }
        s++;
    }
}

void sum(int a[][5])
{
    int sum=0;
    
    for(int x=0;x<=4;x++)
    {
        for(int y=0;y<=4;y++)
        {
            sum=sum+a[x][y];
        }
    }
    cout<<"Sum: "<<sum<<endl;

}

void rsum(int a[][5],int p1,int p2,int s)
{
    s=s+a[p1][p2];
    
    if(p1==4&&p2==4)
    {
        cout<<"Sum: "<<s<<endl;
        return;
    }
        else
        {
            if(p2==4)
            {
                rsum(a,p1+1,0,s);
            }
            else
            {
                rsum(a,p1,p2+1,s);
            }
        }
}