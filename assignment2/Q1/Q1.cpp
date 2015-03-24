#include <iostream>

using namespace std;

int factorial(int);
int total_comb(int,int);
void all_combination(int,int,int,int[],int[]);
void next_combination(int,int,int,int[],int[]);


int main() {
    
    int *acombination;
    int *binary;
    int n,r,check;
    
    cin>>n;
    cin>>r;
    
    binary= new int [n];
    acombination= new int [r];
    check=r;
    
    for(int a=0;a<n;a++)
    {
        binary[a]=0;
    }
    
    for(int a=1;a<=r;a++)
    {
        acombination[a]=a;
    }
    
    all_combination(n,r,check,acombination,binary);
    
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

void all_combination(int n,int r,int check,int acombination[],int binary[])
{
    for(int a=0;a<r;a++)
    {
        binary[acombination[a]]=1;
    }
    
    for(int a=0;a<n;a++)
    {
        cout<<binary[a];
    }
    cout<<endl;
    
    for(int b=1;b<=total_comb(n,r);b++)
    {
        next_combination(n,r,check,acombination,binary);
    }
    
}

void next_combination(int n,int r,int check,int acombination[],int binary[])
{
    for(int a=0;a<n;a++)
    {
        binary[a]=0;
    }
    
    while(acombination[check]==(n-r+check))
    {
        check--;
    }
    acombination[check]++;
    
    for(int a=check;a<=r;a++)
    {
        acombination[a]=acombination[check]+a-check;
    }
    
    for(int a=0;a<r;a++)
    {
        binary[acombination[a]]=1;
    }
    
    for(int a=1;a<=r-1;a++)
    {
        cout<<acombination[a]<<", ";
    }
    cout<<acombination[r]<<endl;
    
    for(int a=0;a<n;a++)
    {
        cout<<binary[a];
    }
    cout<<endl;
}



