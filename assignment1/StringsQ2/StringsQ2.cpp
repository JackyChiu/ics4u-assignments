#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream inPoem( "/Users/i2Chinese/Documents/School/ICS4U/ics4u-assignments/assignment1/poem.in");
ofstream outPoem( "/Users/i2Chinese/Documents/School/ICS4U/ics4u-assignments/assignment1/poem.out");

string last(string);
void poemtype(string []);

int main() {
    
    string poem;
    int n;
    string s[4];
    
    if (!inPoem){
        cerr<<"File could not be open\n";
        exit(1);}
    
    inPoem>>n;
    
    inPoem.ignore();
    
    for(int a=0;a<n;a++)
    {
        for(int b=0;b<=3;b++)
        {
            getline(inPoem,poem);
            s[b]=last(poem);
        }
    }
    poemtype(s);
    
    return 0;
}

string last(string poem)
{
    string r;
    string lastw;
    long int novowel=0;
    long int lastv=0;
    long int v[5]={0};
    long int blank;
    
    blank=poem.rfind(" ");
    lastw=poem.substr(blank+1,poem.length());
    
    v[0]=lastw.rfind("a");
    v[1]=lastw.rfind("e");
    v[2]=lastw.rfind("i");
    v[3]=lastw.rfind("o");
    v[4]=lastw.rfind("u");
    
    for(int x=0;x<=4;x++)
    {
        if(v[x]>lastv)
        {
            lastv=v[x];
        }
        else
        {
            if(v[x]==0)
            {
                novowel++;
            }
        }
    }
    
    if(novowel<5)
    {
        r=lastw.substr(lastv);
    }
    if(novowel==5)
    {
        r=lastw.substr(poem.length());
    }
    
    return r;
}

void poemtype(string s[])
{
    if(s[0]==s[1]&&s[0]==s[2]&&s[0]==s[3]&&s[2]==s[3]&&s[2]==s[3])
    {
        outPoem<<"Perfect"<<endl;
    }
    else
    {
        if(s[0]==s[1]&&s[3]==s[4])
        {
            outPoem<<"Even"<<endl;
        }
        else
        {
            if(s[0]==s[3]&&s[1]==s[2])
            {
                outPoem<<"Shell"<<endl;
            }
            else
            {
                if(s[0]==s[2]&&s[1]==s[3])
                {
                    outPoem<<"Cross"<<endl;
                }
                else
                {
                    outPoem<<"Free"<<endl;
                }
            }
        }
    }
}
