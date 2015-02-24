#include <iostream>

using namespace std;

void ways(int [][8],int,int,int);
int fc,fr; //final column & row

int main() {
    
    int board[8][8]={0};
    int sc,sr; //start column & row
    int steps=1;
    
    cin>>sc;
    cin>>sr;
    cin>>fc;
    cin>>fr;
    
    board[sc][sr]=1;
    board[fc][fr]=1;
    
    ways(board,sc,sr,steps);
    
    return 0;
}

void ways(int board[][8],int sc,int sr,int steps)
{
    if(board[sc][sr]==board[fc][fr])
    {
        cout<<"The shortest amount of steps is "<<steps<<endl;
    }
    
    else
    {
        for(int count=1;count<=8;count++)
        {
            switch(count)
            {
                case 1:
                    
                    if((sc+2<8&&sc+2>1)&&(sr+1<8&&sr+1>1))
                    {
                        ways(board,sc-2,sr+1,steps+1);
                    }
                    
                    break;
                    
                case 2:
                    
                    if((sc+1<8&&sc+1>1)&&(sr+2<8&&sr+2>1))
                    {
                        ways(board,sc+1,sr+2,steps+1);
                    }
                    
                    break;
                    
                case 3:
                    
                    if((sc-1<8&&sc-1>1)&&(sr+2<8&&sr+2>1))
                    {
                        ways(board,sc-1,sr+2,steps+1);
                    }
                    
                    break;
                    
                case 4:
                    
                    if((sc-2<8&&sc-2>1)&&(sr+1<8&&sr+1>1))
                    {
                        ways(board,sc-2,sr+1,steps+1);
                    }
                    
                    break;
                    
                case 5:
                    
                    if((sc-2<8&&sc-2>1)&&(sr-1<8&&sr-1>1))
                    {
                        ways(board,sc-2,sr-1,steps+1);
                    }
                    
                    break;
                    
                case 6:
                    
                    if((sc-1<8&&sc-1>1)&&(sr-2<8&&sr-2>1))
                    {
                        ways(board,sc-1,sr-2,steps+1);
                    }
                    
                    break;
                    
                case 7:
                    
                    if((sc+1<8&&sc+1>1)&&(sr-2<8&&sr-2>1))
                    {
                        ways(board,sc+1,sr-2,steps+1);
                    }
                    
                    break;
                    
                case 8:
                    
                    if((sc+2<8&&sc+2>1)&&(sr-1<8&&sr-1>1))
                    {
                        ways(board,sc+2,sr-1,steps+1);
                    }
                    
                    break;
            }
        }
    }
}