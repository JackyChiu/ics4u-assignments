#include <iostream>
using namespace std;

void check(int,int,int);

int main() {
    
    int n,y,m,d;
    cin>>n;
    for(int a=0;a<n;a++)
    {
        cin>>y;
        cin>>m;
        cin>>d;
        check(y,m,d);
    }
    return 0;
}

void check(int y,int m,int d)
{
    if((2007-y)>18)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        if(m==1&&(2007-y)==18)
        {
            cout<<"Yes"<<endl;
        }
        else{
            if(m<3&&d<=27&&(2007-y)==18)
            {
                cout<<"Yes"<<endl;
            }
            
            else {
                cout<<"No"<<endl;
            }
        }
    }
}
