#include <iostream>

using namespace std;

int main() {
    
    bool well[201][401]={false}; //drilling area
    bool danger=false;
    char d;
    int m;
    int x=198;
    int y=4;
    int remainer=0;
    
    well[y][x]=true;
    well[6-1][-1+x+1]=true;
    well[7-1][-1+x+1]=true;
    well[7-1][0+x+1]=true;
    well[7-1][1+x+1]=true;
    well[7-1][2+x+1]=true;
    well[7-1][3+x+1]=true;
    well[7-1][4+x+1]=true;
    well[7-1][5+x+1]=true;
    well[7-1][6+x+1]=true;
    well[7-1][7+x+1]=true;
    well[6-1][7+x+1]=true;
    well[5-1][7+x+1]=true;
    well[4-1][7+x+1]=true;
    well[3-1][7+x+1]=true;
    well[3-1][6+x+1]=true;
    well[3-1][5+x+1]=true;
    well[4-1][5+x+1]=true;
    well[5-1][5+x+1]=true;
    well[5-1][4+x+1]=true;
    well[5-1][3+x+1]=true;
    well[4-1][3+x+1]=true;
    well[3-1][3+x+1]=true;
    well[3-1][2+x+1]=true;
    well[3-1][1+x+1]=true;
    well[3-1][0+x+1]=true;
    well[2-1][0+x+1]=true;
    well[1-1][0+x+1]=true;
    
    
    while(danger==false)
    {
        cin>>d;
        cin>>m;
        
        if(d=='u')
        {
            for(int a=1;a<=m;a++)
            {
                y--;
                
                if(well[y][x]==false)
                {
                    well[y][x]=true;
                }
                else
                {
                    remainer=m-a;
                    danger=true;
                    break;
                }
            }
        }
        
        if(d=='d')
        {
            for(int a=1;a<=m;a++)
            {
                y++;
                
                if(well[y][x]==false)
                {
                    well[y][x]=true;
                }
                else
                {
                    remainer=m-a;
                    danger=true;
                    break;
                }
                
            }
        }
        
        if(d=='r')
        {
            for(int a=1;a<=m;a++)
            {
                x++;
                
                if(well[y][x]==false)
                {
                    well[y][x]=true;
                }
                else
                {
                    remainer=m-a;
                    danger=true;
                    break;
                }
                
            }
        }
        
        if(d=='l')
        {
            for(int a=1;a<=m;a++)
            {
                x--;
                
                if(well[y][x]==false)
                {
                    well[y][x]=true;
                }
                else
                {
                    danger=true;
                    break;
                }
                
            }
        }
        
        if(d=='q')
        {
            break;
        }
        if(danger==false)
        {
            cout<<x-199<<" "<<(y+1)*-1<<" safe"<<endl;
        }
    }
    
    if(well[y][x]==true&&danger==true)
    {
        cout<<x-199<<" "<<((y+1)*-1)-remainer<<" DANGER"<<endl;
    }
    return 0;
}
