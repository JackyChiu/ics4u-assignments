#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
    int n,input,sum;
    double split;
    ifstream brooksin( "/Users/i2Chinese/Documents/School/ICS4U/ics4u-assignments/assignment1/brooksin.txt");
    ofstream brooksout("/Users/i2Chinese/Documents/School/ICS4U/ics4u-assignments/assignment1/brooksout.txt");
    
    if (! brooksin){
        cerr<<"File could not be open\n";
        exit(1);}
    
    brooksin>>n;
    sum=n;
    int stream[100]={0};
    
    for(int a=0;a<n;a++)
    {
        brooksin>>stream[a];
    }
    
    brooksin>>input;
    
    while(input!=77)
    {
        if(input==99)
        {
            sum++;
            brooksin>>n;
            n--;
            brooksin>>split;
            for(int b=99;b>=n+1;b--)
            {
                
                stream[b]=stream[b-1];
                
            }
            stream[n+1]=stream[n]*((100-split)/100);
            stream[n]=stream[n]*(split/100);
        }
        
        if(input==88)
        {
            sum--;
            brooksin>>n;
            n--;
            stream[n]=stream[n]+stream[n+1];
            for(int c=98;c>=n+1;c--)
            {
                
                stream[c]=stream[c+1];
                
            }
        }
        brooksin>>input;
    }
    for(int d=0;d<=sum;d++)
    {
        if(stream[d]!=0)
        {
            brooksout<<stream[d]<<endl;
        }
    }
    return 0;
}
