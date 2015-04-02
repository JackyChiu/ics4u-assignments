#include <iostream>

void seperate(char [],char [],char []);
int givevalue(char [], char[], int [], int []);
void printroman(int);

using namespace std;

int alength=0;
int blength=0;

int main()
{
    char a[10];
    char b[10];
    char input[100];
    int i=0;
    int sum=0;
    
    while(input[i-1]!='=')
    {
        cin>>input[i];
        i++;
    }
    
    seperate(input,a,b);
    
    int *avalue;
    int *bvalue;
    
    avalue=new int [alength];
    bvalue=new int [blength];
    
    sum=givevalue(a,b,avalue,bvalue);
    
    printroman(sum);
    
    return 0;
}
void seperate(char input[],char a[],char b[])
{
    int i=0;
    int j=0;
    
    while(input[i]!='+')
    {
        a[i]=input[i];
        i++;
        alength++;
    }
    
    j=i+1;
    
    while(input[i]!='=')
    {
        b[i-j]=input[i];
        i++;
    }
    
    blength=i-j;
}

int givevalue(char a[],char b[],int avalue[],int bvalue[])
{
    int asum=0;
    int bsum=0;
    int sum=0;
    
    for(int x=0;x<alength;x++)
    {
        if(a[x]=='I')
        {
            avalue[x]=1;
        }
        if(a[x]=='V')
        {
            avalue[x]=5;
        }
        if(a[x]=='X')
        {
            avalue[x]=10;
        }
        if(a[x]=='L')
        {
            avalue[x]=50;
        }
        if(a[x]=='C')
        {
            avalue[x]=100;
        }
        if(a[x]=='D')
        {
            avalue[x]=500;
        }
        if(a[x]=='M')
        {
            avalue[x]=1000;
        }
    }
    
    for(int x=0;x<blength;x++)
    {
        if(b[x]=='I')
        {
            bvalue[x]=1;
        }
        if(b[x]=='V')
        {
            bvalue[x]=5;
        }
        if(b[x]=='X')
        {
            bvalue[x]=10;
        }
        if(b[x]=='L')
        {
            bvalue[x]=50;
        }
        if(b[x]=='C')
        {
            bvalue[x]=100;
        }
        if(b[x]=='D')
        {
            bvalue[x]=500;
        }
        if(b[x]=='M')
        {
            bvalue[x]=1000;
        }
    }
    
    asum=avalue[alength-1];
    
    for(int x=alength-1;x>0;x--)
    {
        if(avalue[x-1]>=avalue[x])
        {
            asum=asum+avalue[x-1];
        }
        if(avalue[x-1]<avalue[x])
        {
            asum=asum-avalue[x-1];
        }
    }
    
    bsum=bvalue[blength-1];
    
    for(int x=blength-1;x>0;x--)
    {
        if(bvalue[x-1]>=bvalue[x])
        {
            bsum=bsum+bvalue[x-1];
        }
        if(bvalue[x-1]<bvalue[x])
        {
            bsum=bsum-bvalue[x-1];
        }
    }
    
    sum=asum+bsum;
    return sum;
    
}

void printroman(int sum)
{
    
    if(sum>1000)
    {
        cout<<"CONCORDIA CUM VERITATE"<<endl;
        return;
    }
    while(sum>0)
    {
    start:
        
        if((sum-900)>=0)
        {
            cout<<"CM";
            sum=sum-900;
            goto start;
        }
        
        if((sum-500)>=0)
        {
            cout<<"D";
            sum=sum-500;
            goto start;
        }
        
        if((sum-400)>=0)
        {
            cout<<"CD";
            sum=sum-400;
            goto start;
        }
        
        if((sum-100)>=0)
        {
            cout<<"C";
            sum=sum-100;
            goto start;
        }
        
        if((sum-90)>=0)
        {
            cout<<"XC";
            sum=sum-90;
            goto start;
        }
        
        if((sum-50)>=0)
        {
            cout<<"L";
            sum=sum-50;
            goto start;
        }
        
        if((sum-40)>=0)
        {
            cout<<"XL";
            sum=sum-40;
            goto start;
        }
        
        if((sum-10)>=0)
        {
            cout<<"X";
            sum=sum-10;
            goto start;
        }
        
        if((sum-9)>=0)
        {
            cout<<"IX";
            sum=sum-9;
            goto start;
        }
        
        if((sum-5)>=0)
        {
            cout<<"V";
            sum=sum-5;
            goto start;
        }
        
        if((sum-4)>=0)
        {
            cout<<"IV";
            sum=sum-4;
            goto start;
        }
        
        if((sum-1)>=0)
        {
            cout<<"I";
            sum=sum-1;
            goto start;
        }
    }
    cout<<endl;
}