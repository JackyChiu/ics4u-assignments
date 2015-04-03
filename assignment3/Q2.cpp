#include <iostream>
#include <string>

using namespace std;

class Roman
{
public:
    Roman();
    void givevalue(string);
    void addition(Roman);
    void subtraction(Roman);
    void multiplication(Roman);
    void division(Roman);
    void modulus(Roman);
    void printroman();
    
private:
    int long c[50];
    int long sum;
    int long printsum;
    
};

Roman::Roman()
{
    sum=0;
    printsum=0;
}

void Roman::givevalue(string input)
{
    int long length=input.length();
    
    for(int x=0;x<length;x++)
    {
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
    }
    
    sum=c[length-1];
    
    for(int long x=length-1;x>0;x--)
    {
        if(c[x-1]>=c[x])
        {
            sum=sum+c[x-1];
        }
        if(c[x-1]<c[x])
        {
            sum=sum-c[x-1];
        }
    }
    
}

void Roman::addition(Roman B)
{
    printsum=sum+B.sum;
    printroman();
}

void Roman::subtraction(Roman B)
{
    printsum=sum-B.sum;
    printroman();
}

void Roman::multiplication(Roman B)
{
    printsum=sum*B.sum;
    printroman();
}

void Roman::division(Roman B)
{
    printsum=sum/B.sum;
    printroman();
}

void Roman::modulus(Roman B)
{
    printsum=sum%B.sum;
    printroman();
}

void Roman::printroman()
{
    if(printsum>1000)
    {
        cout<<"CONCORDIA CUM VERITATE"<<endl;
        return;
    }
    while(printsum>0)
    {
    start:
        
        if((printsum-900)>=0)
        {
            cout<<"CM";
            printsum=printsum-900;
            goto start;
        }
        
        if((printsum-500)>=0)
        {
            cout<<"D";
            printsum=printsum-500;
            goto start;
        }
        
        if((printsum-400)>=0)
        {
            cout<<"CD";
            printsum=printsum-400;
            goto start;
        }
        
        if((printsum-100)>=0)
        {
            cout<<"C";
            printsum=printsum-100;
            goto start;
        }
        
        if((printsum-90)>=0)
        {
            cout<<"XC";
            printsum=printsum-90;
            goto start;
        }
        
        if((printsum-50)>=0)
        {
            cout<<"L";
            printsum=printsum-50;
            goto start;
        }
        
        if((printsum-40)>=0)
        {
            cout<<"XL";
            printsum=printsum-40;
            goto start;
        }
        
        if((printsum-10)>=0)
        {
            cout<<"X";
            printsum=printsum-10;
            goto start;
        }
        
        if((printsum-9)>=0)
        {
            cout<<"IX";
            printsum=printsum-9;
            goto start;
        }
        
        if((printsum-5)>=0)
        {
            cout<<"V";
            printsum=printsum-5;
            goto start;
        }
        
        if((printsum-4)>=0)
        {
            cout<<"IV";
            printsum=printsum-4;
            goto start;
        }
        
        if((printsum-1)>=0)
        {
            cout<<"I";
            printsum=printsum-1;
            goto start;
        }
    }
    cout<<endl;
}

int main()
{
    Roman A;
    Roman B;
    
    A.givevalue("VII");
    B.givevalue("II");
    
    cout<<"Addition: ";
    A.addition(B);
    
    cout<<"Subtraction: ";
    A.subtraction(B);
    
    cout<<"multiplication: ";
    A.multiplication(B);
    
    cout<<"Division: ";
    A.division(B);
    
    cout<<"Modulus: ";
    A.modulus(B);
    
    
    return 0;
}


