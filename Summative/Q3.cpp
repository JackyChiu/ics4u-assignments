#include <iostream>

using namespace std;

class Nim
{
public:
    Nim();
    void displayPiles();
    void getHumanMove(int,int);
    void makeMove();
private:
    int board[4][7];
    //row that human moves
    int row;
    //amount human takes away
    int amount;
};

Nim::Nim()
{
    //set the whole board to 0
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<7;j++)
        {
            board[i][j]=0;
        }
    }
    
    //first row
    board[0][0]=1;
    //second row
    for(int i=0;i<3;i++)
    {
        board[1][i]=1;
    }
    //thrid row
    for(int i=0;i<5;i++)
    {
        board[2][i]=1;
    }
    //forth row
    for(int i=0;i<7;i++)
    {
        board[3][i]=1;
    }
}

void Nim::displayPiles()
{
    //display board
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<7;j++)
        {
            //only displays 1s
            if(board[i][j]==1)
            {
                cout<<board[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

void Nim::getHumanMove(int r, int a)
{
    //initaizeds the row and amount
    row=r-1;
    amount=a;
}

void Nim::makeMove()
{
    for(int j=6;j>=0;j--)
    {
        //while the value is 1 and there is still a amount to remove
        if(board[row][j]==1&&amount!=0)
        {
            board[row][j]=0;
            amount--;
        }
    }
}

int main()
{
    Nim N;
    int r,a=0;
    
    N.displayPiles();
    
    cout<<"Enter row: ";
    cin>>r;
    
    cout<<"Enter amount: ";
    cin>>a;
    //plan to make a game loop
    N.getHumanMove(r, a);
    N.makeMove();
    N.displayPiles();
    
    return 0;
}