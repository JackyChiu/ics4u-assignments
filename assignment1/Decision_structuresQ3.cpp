#include <iostream>
using namespace std;

void goalscount(int);
int goals=0;

int main() {
    
    int s;
    
    cin>>s;
    goalscount(s);
    cout<<goals<<endl;
    
    return 0;
}

void goalscount(int s)
{
    for(int a=1;a<s;a++)
    {
        for(int b=a+1;b<s;b++)
        {
            for(int c=b+1;c<s;c++)
            {
                goals++;
            }
        }
    }
}
