#include <iostream>
#include<fstream>

using namespace std;

void pattern(int,int,int[]);
int factorial(int x);
int total_comb(int,int);
bool lastcomb(int,int,int []);
void move(int,int,int [],int);
void poolmove(int,int,int[],int);
void pattern(int,int,int []);

ifstream inPat( "/Users/i2Chinese/Documents/School/ICS4U/Practice/Practice/pat.in");
ofstream outPat( "/Users/i2Chinese/Documents/School/ICS4U/Practice/Practice/pat.out");

int main() {
    
    int pair,n,k;
    int *set;
    
    if (! inPat){
        cerr<<"File could not be open\n";
        exit(1);}
    
    inPat>>pair;
    
    for(int a=0;a<pair;a++)
    {
        outPat<<"The bit patterns are: "<<endl;
        
        inPat>>n;
        inPat>>k;
        
        set=new int [n];
        
        for(int a=0;a<n;a++)
        {
            if(a<k)
            {
                set[a]=1;
            }
            else
            {
                set[a]=0;
            }
            cout<<set[a];
        }
        
        pattern(n,k,set);
        
        outPat<<endl;
    }
    return 0;
}

int factorial(int x)
{
    int factorial=1;
    
    for(int a=1;a<=x;a++)
    {
        factorial=factorial*a;
    }
    return factorial;
}

int total_comb(int n,int r)
{
    int total_comb=0;
    total_comb=(factorial(n)/(factorial(r)*(factorial(n-r))));
    return total_comb;
}

bool lastcomb(int n,int k,int set[])
{
    int finalcomb=0; //finds final combination
    
    for(int a=n-k;a<n;a++)
    {
        finalcomb=finalcomb+set[a];
    }
    
    if(finalcomb==k)
    {
        return true; //ends
    }
    
    else
    {
        return false;
    }
    
}

void move(int n,int k,int set[],int i)
{
    int last; //last position
    
    for(int a=n-1;a>=0;a--)
    {
        if(set[a]==1)
        {
            last=a;
            break;
        }
    }
    
    for(int a=last;a<n;a++)
    {
        set[last+1]=1;
        set[last]=0;
    }
}

void poolmove(int n,int k,int set[],int magnitude)
{
    
    for(int a=0;a<n;a++)
    {
        if(a<k)
        {
            set[a]=1;
        }
        else
        {
            set[a]=0;
        }
    }
    
    
    for(int a=magnitude;a>=0;magnitude--)
    {
        if(set[a]==1)
        {
            set[a+1]=1;
            set[a]=0;
        }
    }
    
    for(int a=0;a<n;a++)
    {
        cout<<set[a];
    }
    
    cout<<endl;
}

void pattern(int n,int k,int set[])
{
    int i=(k-1);
    int newi=i;
    int magnitude=(k-1);
    
    while(lastcomb(n,k,set)==false)
    {
        while(i<(n-1)&&i>=0)
        {
            cout<<endl;
            
            if((set[i]==1)&&i<n)
            {
                move(n,k,set,i);
            }
            
            i++;
            
            for(int a=0;a<n;a++)
            {
                cout<<set[a];
            }
        }
        poolmove(n,k,set,magnitude);
        magnitude++;
        newi++;
        i=newi;
    }
}
