#include <iostream>

using namespace std;

void boardvalue(int [][8]);
int ways(int,int,int);
int fc,fr; //final column & row

int board[8][8]={0};

int main() {
    
    int sc,sr; //start column & row
    int steps=0;
    
    cin>>sc;
    cin>>sr;
    cin>>fc;
    cin>>fr;
    
    boardvalue(board);
    cout<<"shortest amount of steps"<<ways(sc,sr,steps)<<endl;
    
    
    return 0;
}

void boardvalue(int board [][8])
{
    for(int a=1;a<8;a++)
    {
        for(int b=0;b<8;b++)
        {
            board[a][b]=999;
        }
    }
}

int ways(int c,int r,int steps)
{
    if(c<=8&&c>=1&&r<=8&&r>=1&&(steps<board[c][r]))
    {
        board[c][r]=steps;
        return ways(c-2,r+1,steps+1);
        return ways(c-1,r+2,steps+1);
        return ways(c+1,r+2,steps+1);
        return ways(c+2,r+1,steps+1);
        return ways(c+2,r-1,steps+1);
        return ways(c+1,r-2,steps+1);
        return ways(c-1,r-2,steps+1);
        return ways(c-2,r-1,steps+1);
    }
    else
    {
        return steps;
    }
}