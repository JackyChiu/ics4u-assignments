#include <iostream>
#include <string>

using namespace std;

class ARAR
{
public:
    ARAR(string="1I");
    void givevalue();
    ARAR addition(ARAR);
    ARAR subtraction(ARAR);
    ARAR multiplication(ARAR);
    ARAR division(ARAR);
    ARAR modulus(ARAR);
    void print();
    
private:
    string input;
    int sum;
    int c[20];
    int printsum;
    int long length;
};

ARAR::ARAR(string s)
{
    input=s;
    sum=0;
    printsum=0;
    givevalue();
}

void ARAR::givevalue()
{
    int long length=input.length();
    
    for(int x=0;x<length;x++)
    {
        //romans:
        if(input.substr(x,1)=="I")
        {
            c[x]=1;
        }
        if(input.substr(x,1)=="V")
        {
            c[x]=5;
        }
        if(input.substr(x,1)=="X")
        {
            c[x]=10;
        }
        if(input.substr(x,1)=="L")
        {
            c[x]=50;
        }
        if(input.substr(x,1)=="C")
        {
            c[x]=100;
        }
        if(input.substr(x,1)=="D")
        {
            c[x]=500;
        }
        if(input.substr(x,1)=="M")
        {
            c[x]=1000;
        }
        //arabric:
        if(input.substr(x,1)=="0")
        {
            c[x]=0;
        }
        if(input.substr(x,1)=="1")
        {
            c[x]=1;
        }
        if(input.substr(x,1)=="2")
        {
            c[x]=2;
        }
        if(input.substr(x,1)=="3")
        {
            c[x]=3;
        }
        if(input.substr(x,1)=="4")
        {
            c[x]=4;
        }
        if(input.substr(x,1)=="5")
        {
            c[x]=5;
        }
        if(input.substr(x,1)=="6")
        {
            c[x]=6;
        }
        if(input.substr(x,1)=="7")
        {
            c[x]=7;
        }
        if(input.substr(x,1)=="8")
        {
            c[x]=8;
        }
        if(input.substr(x,1)=="9")
        {
            c[x]=9;
        }
    }
    
    sum=c[length-1]*c[length-2];
    
    for(int long x=length-1;x>2;x=x-2)
    {
        if(c[x-2]>=c[x])
        {
            sum=sum+(c[x-2]*c[x-3]);
        }
        if(c[x-2]<c[x])
        {
            sum=sum-(c[x-2]*c[x-3]);
        }
    }
    
}

ARAR ARAR::addition(ARAR B)
{
    ARAR temp;
    temp.printsum=sum+B.sum;
    return temp;
}

ARAR ARAR::subtraction(ARAR B)
{
    ARAR temp;
    temp.printsum=sum-B.sum;
    return temp;
}

ARAR ARAR::multiplication(ARAR B)
{
    ARAR temp;
    temp.printsum=sum*B.sum;
    return temp;
}

ARAR ARAR::division(ARAR B)
{
    ARAR temp;
    temp.printsum=sum/B.sum;
    return temp;
}

ARAR ARAR::modulus(ARAR B)
{
    ARAR temp;
    temp.printsum=sum%B.sum;
    return temp;
}

void ARAR::print()
{
    cout<<printsum<<endl;
}

int main()
{
    ARAR A("3M1D2C");
    ARAR B("2I3I2X9V1X");
    ARAR C;
    
    cout<<"Addition: ";
    C=A.addition(B);
    C.print();
    
    cout<<"Subtraction: ";
    C=A.subtraction(B);
    C.print();
    
    cout<<"multiplication: ";
    C=A.multiplication(B);
    C.print();
    
    cout<<"Division: ";
    C=A.division(B);
    C.print();
    
    cout<<"Modulus: ";
    C=A.modulus(B);
    C.print();
    
    
    
    return 0;
}
