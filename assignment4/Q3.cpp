#include <iostream>
#include <string>

using namespace std;

class Roman
{
    friend istream &operator>>(istream&,Roman&);
    friend ostream &operator<<(ostream&,Roman&);
public:
    Roman(string="I");
    void givevalue();
    Roman operator+(Roman);
    Roman operator-(Roman);
    Roman operator*(Roman);
    Roman operator/(Roman);
    Roman operator%(Roman);
    Roman operator++();
    Roman operator--();
    
    bool operator>(Roman);
    bool operator<(Roman);
    bool operator>=(Roman);
    bool operator<=(Roman);
    bool operator==(Roman);
    bool operator!=(Roman);
    
private:
    string input;
    int long c[50];
    int long sum;
    int long printsum;
    
};

Roman::Roman(string x)
{
    input=x;
    sum=0;
    printsum=0;
    givevalue();
}

void Roman::givevalue()
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

Roman Roman::operator+(Roman b)
{
    Roman temp;
    temp.sum=sum+b.sum;
    return temp;
}

Roman Roman::operator-(Roman b)
{
    Roman temp;
    temp.sum=sum-b.sum;
    return temp;
}

Roman Roman::operator*(Roman b)
{
    Roman temp;
    temp.sum=sum*b.sum;
    return temp;
}

Roman Roman::operator/(Roman b)
{
    Roman temp;
    temp.sum=sum/b.sum;
    return temp;
}

Roman Roman::operator%(Roman b)
{
    Roman temp;
    temp.sum=sum%b.sum;
    return temp;
}

Roman Roman::operator++()
{
    givevalue();
    sum++;
    return *this;
}

Roman Roman::operator--()
{
    givevalue();
    sum--;
    return *this;
}

bool Roman::operator>(Roman b)
{
    return sum>b.sum;
}

bool Roman::operator<(Roman b)
{
    return sum<b.sum;
}

bool Roman::operator>=(Roman b)
{
    return sum>=b.sum;
}

bool Roman::operator<=(Roman b)
{
    return sum<=b.sum;
}

bool Roman::operator==(Roman b)
{
    return sum==b.sum;
}

bool Roman::operator!=(Roman b)
{
    return sum!=b.sum;
}

istream &operator>>(istream&cin,Roman&b)
{
    cin>>b.input;
    b.givevalue();
    return cin;
}

ostream &operator<<(ostream&cout,Roman&b)
{
    b.printsum=b.sum;
    
    if(b.printsum>1000)
    {
        cout<<"CONCORDIA CUM VERITATE"<<endl;
        return cout;
    }
    while(b.printsum>0)
    {
    start:
        
        if((b.printsum-900)>=0)
        {
            cout<<"CM";
            b.printsum=b.printsum-900;
            goto start;
        }
        
        if((b.printsum-500)>=0)
        {
            cout<<"D";
            b.printsum=b.printsum-500;
            goto start;
        }
        
        if((b.printsum-400)>=0)
        {
            cout<<"CD";
            b.printsum=b.printsum-400;
            goto start;
        }
        
        if((b.printsum-100)>=0)
        {
            cout<<"C";
            b.printsum=b.printsum-100;
            goto start;
        }
        
        if((b.printsum-90)>=0)
        {
            cout<<"XC";
            b.printsum=b.printsum-90;
            goto start;
        }
        
        if((b.printsum-50)>=0)
        {
            cout<<"L";
            b.printsum=b.printsum-50;
            goto start;
        }
        
        if((b.printsum-40)>=0)
        {
            cout<<"XL";
            b.printsum=b.printsum-40;
            goto start;
        }
        
        if((b.printsum-10)>=0)
        {
            cout<<"X";
            b.printsum=b.printsum-10;
            goto start;
        }
        
        if((b.printsum-9)>=0)
        {
            cout<<"IX";
            b.printsum=b.printsum-9;
            goto start;
        }
        
        if((b.printsum-5)>=0)
        {
            cout<<"V";
            b.printsum=b.printsum-5;
            goto start;
        }
        
        if((b.printsum-4)>=0)
        {
            cout<<"IV";
            b.printsum=b.printsum-4;
            goto start;
        }
        
        if((b.printsum-1)>=0)
        {
            cout<<"I";
            b.printsum=b.printsum-1;
            goto start;
        }
    }
    return cout;
}

int main()
{
    Roman A("VII");
    Roman B("II");
    Roman C;
    
    cin>>C;
    cout<<"A: "<<A<<endl;
    cout<<"B: "<<B<<endl;
    cout<<"C: "<<C<<endl;
    
    C=A+B;
    cout<<"Sum: "<<C<<endl;
    
    C=A-B;
    cout<<"Difference: "<<C<<endl;
    
    C=A*B;
    cout<<"Product: "<<C<<endl;
    
    C=A/B;
    cout<<"Quoient: "<<C<<endl;
    
    C=A%B;
    cout<<"Modulus: "<<C<<endl;
    
    ++A;
    cout<<"++A: "<<A<<endl;
    
    --B;
    cout<<"--B: "<<B<<endl;
    
    if(A>B)
    {
        cout<<"A is greater than B"<<endl;
    }
    
    if(A<B)
    {
        cout<<"B is greater than A"<<endl;
    }
    
    if(A>=B)
    {
        cout<<"A is greater than or equal to B"<<endl;
    }
    
    if(A<=B)
    {
        cout<<"B is greater than or equal to A"<<endl;
    }
    
    if(A==B)
    {
        cout<<"A and B equal"<<endl;
    }
    
    if(A!=B)
    {
        cout<<"A and B not equal"<<endl;
    }
    
    return 0;
}
