#include <iostream>
#include <fstream>
using namespace std;

bool nastyornah(int);

int main() {
    
    int input;
    int number;
    
    ofstream outnasty("/Users/i2Chinese/Documents/School/ICS4U/ics4u-assignments/assignment1/outnasty.txt");
    ifstream innasty( "/Users/i2Chinese/Documents/School/ICS4U/ics4u-assignments/assignment1/innasty.txt");
    
    if (! innasty){
        cerr<<"File could not be open\n";
        exit(1);}
    
    innasty>>input;
    
    for(int a=0;a<input;a++)
    {
        
        if (! innasty){
            cerr<<"File could not be open\n";
            exit(1);}
        
        innasty>>number;
        
        if(nastyornah(number)==true)
        {
            outnasty<<number<<" is nasty"<<endl;
            
        }
        
        else
        {
            outnasty<<number<<" is not nasty"<<endl;
            
        }
    }
    return 0;
}

bool nastyornah (int number)
{
    int factors[100000];
    int a=0;
    for(int b=1;b<=number;b++)
    {
        if(number%b==0)
        {
            factors[a]=b;
            a++;
        }
    }
    for(int c=0;c<=a;c++)
    {
        for(int d=0;d<=a;d++)
        {
            for(int e=0;e<=a;e++)
            {
                for(int f=0;f<=a;f++)
                {
                    if((factors[c]!=factors[d])&&(factors[d]!=factors[e])&&factors[c]!=factors[f])
                    {
                        if((factors[c]*factors[d]==number)&&(factors[e]*factors[f]==number))
                        {
                            if((factors[c]-factors[d])==(factors[e]+factors[f]))
                            {
                                return true;
                            }
                        }
                    }
                }
                
            }
            
        }
        
    }
    
    return false;
}
