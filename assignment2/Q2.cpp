#include <iostream>

void seperate(char [],char [],char []);

using namespace std;

int main()
{
    char a[10];
    char b[10];
    char input[100];
    int i=0;
    int j=0;
    
    while(input[i-1]!='=')
    {
        cin>>input[i];
        i++;
    }
    
    i=0;
    
    while(input[i]!='+')
    {
        a[i]=input[i];
        i++;
    }
    
    for(int x=0;x<i;x++)
    {
        cout<<a[x];
    }
    
    cout<<endl;
    
    j=i+1;
    
    while(input[i]!='=')
    {
        b[i-j]=input[i];
        i++;
    }
    
    for(int x=0;x<i-j;x++)
    {
        cout<<b[x];
    }
    
    cout<<endl;
    
    seperate(input,a,b);
    
    return 0;
}
void seperate(char input[],char a[],char b[])
{
    
}