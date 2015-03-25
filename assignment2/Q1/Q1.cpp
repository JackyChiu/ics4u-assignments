#include <iostream>
#include <fstream>

using namespace std;

int factorial(int);
int total_comb(int,int);
void all_combination(int,int,int,int[],int[]);
void next_combination(int,int,int,int[],int[]);

ifstream inPat( "/Users/i2Chinese/Documents/School/ICS4U/ics4u-assigments/assigment2/Q1/pat.in");
ofstream outPat( "/Users/i2Chinese/Documents/School/ICS4U/ics4u-assigments/assigment2/Q1/pat.out");

int main() {
    
    int *acombination;
    int *binary;
    int pair,n,r,check;
    
    if (! inPat){
        cerr<<"File could not be open\n";
        exit(1);}
    
    inPat>>pair;
    
    for(int a=0;a<pair;a++)
    {
        
        outPat<<"The bit patterns are: "<<endl;
        
        inPat>>n;
        inPat>>r;
        
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

void all_combination(int n,int r,int check,int acombination[],int binary[])
{
    for(int a=0;a<r+1;a++)
    {
        binary[acombination[a]-1]=1;
    }
    
    for(int a=0;a<n;a++)
    {
        outPat<<binary[a];
    }
    outPat<<endl;
    
    for(int b=1;b<total_comb(n,r);b++)
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
    
    for(int a=0;a<r+1;a++)
    {
        binary[acombination[a]-1]=1;
    }
    
    for(int a=0;a<n;a++)
    {
        outPat<<binary[a];
    }
    outPat<<endl;
}
