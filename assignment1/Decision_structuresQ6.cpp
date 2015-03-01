#include <iostream>

using namespace std;

int count(int,int);

int main() {
    
    int input1,input2;
    
    cin>>input1;//start
    cin>>input2;//end
    
    cout<<"There are "<<count(input1,input2)<<" numbers between "<<input1<<" and "<<input2<<" whose cubes are Ramanujan Cubes"<<endl;
    return 0;
}

int count(int x,int y)
{
    int count=0;//counter
    
    for(int a=x;a<=y;a++)//checks each number between the inputs
    {
        for(int b=1;b<a;b++)
        {
            for(int c=b+1;c<a;c++)
            {
                for(int d=c+1;d<a;d++)
                {
                    if(a>d&&d>c&&c>b) //differnt ints
                    {
                        if((a*a*a)==((b*b*b)+(c*c*c)+(d*d*d))) //checks cube
                        {
                            count++; //adds total number of cubes
                            b=a; //fun fact: it took me 4hours to figure out I needed this in my code
                        }
                    }
                }
            }
        }
    }
    
    return count;
}
