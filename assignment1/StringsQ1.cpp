#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream inCensor( "/Users/i2Chinese/Documents/School/ICS4U/ics4u-assignments/assignment1/censor.in");
ofstream outCensor( "/Users/i2Chinese/Documents/School/ICS4U/ics4u-assignments/assignment1/censor.out");

void censor(string);

int main() {
    
    int n; //number of sentences
    string sentence;
    
    if (!inCensor){
        cerr<<"File could not be open\n";
        exit(1);}
    
    inCensor>>n;
    
    inCensor.ignore();
    
    for(int i=0;i<n;i++)
    {
        getline(inCensor,sentence);
        censor(sentence);
    }
    
    return 0;
}

void censor(string sentence)
{
    string word;
    long int blank=0;
    
    blank=sentence.find(" ");
    
    while(blank>0)
    {
        word=sentence.substr(0,blank);
        if(word.length()==4)
        {
            outCensor<<"**** ";
        }
        else
        {
            outCensor<<word<<" ";
        }
        sentence=sentence.substr(blank+1,sentence.length()-blank-1);
        
        blank=sentence.find(" ");
    }
    outCensor<<sentence<<endl;
}