#include <iostream>

using namespace std;

int main() {
    
    int q,sum=0;
    char a[10000];
    char ca[10000];
    
    
    cin>>q;
    
    for(int x=0;x<q;x++)
    {
        cin>>a[x];
    }
    
    for(int y=0;y<q;y++)
    {
        cin>>ca[y];
    }
    
    for(int i=0;i<q;i++)
    {
        if(a[i]==ca[i])
        {
            sum++;
        }
    }
    
    cout<<sum<<endl;
    
    return 0;
}
