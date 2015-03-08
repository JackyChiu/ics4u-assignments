#include <iostream>
#include <fstream>
#include<iomanip> //iomanip library needed
double ba(double []);
double sa(double []);

using namespace std;

int main() {
    
    string city;
    double a[7];
    
    ofstream Boutput("/Users/i2Chinese/Documents/School/ICS4U/ics4u-assignments/assignment1/output.txt");
    ifstream Binput( "/Users/i2Chinese/Documents/School/ICS4U/ics4u-assignments/assignment1/input.txt");
    
    if (! Binput){
        cerr<<"File could not be open\n";
        exit(1);}
    
    for(int x=0;x<=9;x++)
    {
        Binput>>city;
        Boutput<<city<<" ";
        
        for(int x=0;x<=6;x++)
        {
            Binput>>a[x];
        }
        
        Boutput<<setprecision(3)<<setiosflags(ios::fixed|ios::showpoint)<<ba(a)<<" ";
        Boutput<<setprecision(3)<<setiosflags(ios::fixed|ios::showpoint)<<sa(a)<<endl;
    }
    return 0;
}

double ba(double a[])
{
    return a[3]/a[1];
}

double sa(double a[])
{
    return (((a[3]-a[4]-a[5]-a[6])+(2*a[4])+(3*a[5])+(4*a[6]))/a[1]);
}
