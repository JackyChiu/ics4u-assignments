#include <iostream>

using namespace std;

class Nim
{
public:
    Nim();
    void displayPiles();
    void getHumanMove(int,int);
    void selectComputerMove();
    void makeMove();
    bool gameOver();
    bool validMove();
    bool lastRow();
private:
    int board[4][7];
    //row on board
    int row;
    //amount to takes away
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

void Nim::selectComputerMove()
{
    //totals in rows
    int total[4]={0,0,0,0};
    //number of mutiple of 1,2,4
    int mult[3]={0,0,0};
    
    //hold mult values
    int multvalues[3]={1,2,4};
    //
    int multvaluecount=0;
    
    int smartamount=0;
    
    //Regular case
    if(lastRow()==false)
    {
        //finds total amount in each row
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<7;j++)
            {
                if(board[i][j]==1)
                {
                    total[i]=total[i]+1;
                }
            }
        }
        
        //finds multiples of each row from the total amount
        for(int i=0;i<4;i++)
        {
            if(total[i]-4>=0)
            {
                mult[2]++;
                total[i]=total[i]-4;
            }
            if(total[i]-2>=0)
            {
                mult[1]++;
                total[i]=total[i]-2;
            }
            if(total[i]-1>=0)
            {
                mult[0]++;
                total[i]=total[i]-1;
            }
        }
        //odd mult[i] + any other odd mult[i] == smartamount
        if(mult[0]%2!=0)
        {
            smartamount++;
        }
        if(mult[1]%2!=0)
        {
            smartamount=smartamount+2;
        }
        if(mult[2]%2!=0)
        {
            smartamount=smartamount+4;
        }
        
        //prevents special lose case
        if(mult[0]==4)
        {
            if(mult[1]==1&&mult[2]==0)
            {
                smartamount++;
            }
            else if(mult[1]==0 && mult[2]==1)
            {
                smartamount++;
            }
        }
        
        amount=smartamount;
        row=0;
        
        //prevents smartamount from equalling to 0
        if(smartamount<=0)
        {
            smartamount=1;
        }
        amount=smartamount;
        
        //finds a valid row
        while(validMove()==false)
        {
            row++;
            if(row==4)
            {
                //decreases smartamount if rows dont have enough
                smartamount=smartamount-multvalues[multvaluecount];
                amount=smartamount;
                multvaluecount++;
                //restarts check with new smart amount
                row=0;
            }
        }
    }
    //Winning move case
    else
    {
        for(int j=0;j<7;j++)
        {
            if(board[row][j]==1)
            {
                total[row]++;
            }
        }
        smartamount=total[row]-1;
        
        //prevents smartamount from equalling to 0
        if(smartamount<=0)
        {
            smartamount=1;
        }
        amount=smartamount;
    }
    
    cout<<"Computer move made, current board:"<<endl;
    
    makeMove();
    displayPiles();
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

bool Nim::lastRow()
{
    int validrows=0;
    int lastrow=0;
    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<7;j++)
        {
            if(board[i][j]==1)
            {
                validrows++;
                lastrow=i;
                j=7;
            }
        }
    }
    
    //last row if only that row has 1's left
    if(validrows==1)
    {
        row=lastrow;
        return true;
    }
    else
    {
        return false;
    }
    
}

bool Nim::gameOver()
{
    bool gameOver=true;
    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<7;j++)
        {
            //if there is still a stick on the board, the game continues
            if(board[i][j]==1)
            {
                gameOver=false;
            }
        }
    }
    return gameOver;
}

bool Nim::validMove()
{
    //checks if row/amount values are reasonable
    if(row>4 || amount>7)
    {
        return false;
    }
    
    //checks if thiers enough sticks to remove
    int amountavailble=0;
    
    for(int j=6;j>=0;j--)
    {
        if(board[row][j]==1)
        {
            amountavailble++;
        }
    }
    
    if(amountavailble<amount)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    Nim N;
    int r,a=0;
    
    cout<<"Board:"<<endl;
    N.displayPiles();
    
    while(N.gameOver()==false)
    {
        cout<<"Enter row: ";
        cin>>r;
        
        cout<<"Enter amount: ";
        cin>>a;
        
        N.getHumanMove(r, a);
        
        //ensures input is valid
        if(N.validMove()==false)
        {
            cout<<"Not valid"<<endl;
            
            cout<<"Renter row: ";
            cin>>r;
            
            cout<<"Renter amount: ";
            cin>>a;
            
            N.getHumanMove(r, a);
            N.makeMove();
            cout<<"Human move made, current board:"<<endl;
            N.displayPiles();
        }
        else
        {
            N.makeMove();
            cout<<"Human move made, current board:"<<endl;
            N.displayPiles();
        }
        //if human takes the last 1 then they lose
        if(N.gameOver()==true)
        {
            cout<<"Computer Wins"<<endl;
            break;
        }
        
        N.selectComputerMove();
        //if computer takes last 1 then human wins
        if(N.gameOver()==true)
        {
            cout<<"Human Wins"<<endl;
        }
    }
    
    return 0;
}