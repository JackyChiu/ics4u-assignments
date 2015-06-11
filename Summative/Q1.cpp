#include <iostream>

using namespace std;

class Calendar
{
public:
    Calendar(int=0,int=0);
    bool isLeap();
    int daysInMonth();
    int daysSinceJan1(int,int,int);
    int daysInPreviousYears(int);
    int daysSinceStartOfTime(int,int,int);
    int dayOfWeek(int,int,int);
    void createCalendar(int,int);
private:
    int day;
    int month;
    int year;
    int cal[5][7];
};

Calendar::Calendar(int m,int y)
{
    month=m;
    year=y;
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<7;j++)
        {
            cal[i][j]=0;
        }
    }
}

bool Calendar::isLeap()
{
    bool leap=false;
    
    if(year%4==0)
    {
        leap=true;
        
        if(year%100==0)
        {
            leap=false;
            
            if(year%400==0)
            {
                leap=true;
            }
        }
    }
    
    return leap;
}

int Calendar::daysInMonth()
{
    int daysinmonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    
    if(month==2&&isLeap()==true)
    {
        return 29;
    }
    else
    {
        return daysinmonth[month-1];
    }
}

int Calendar::daysSinceJan1(int d, int m, int y)
{
    day=d;
    month=m;
    year=y;
    
    int totaldays=d;
    
    for(int i=month-1;i>0;i--)
    {
        month=i;
        totaldays=totaldays+daysInMonth();
    }
    
    return totaldays-1;
}

int Calendar::daysInPreviousYears(int y)
{
    year=y;
    
    int totaldays=0;
    
    for(int i=year-1;i>=1900;i--)
    {
        year=i;
        if(isLeap()==true)
        {
            totaldays=totaldays+366;
        }
        else
        {
            totaldays=totaldays+365;
        }
    }
    
    return totaldays;
}

int Calendar::daysSinceStartOfTime(int d,int m,int y)
{
    day=d;
    month=m;
    year=y;
    
    int totaldays=0;
    
    totaldays=daysSinceJan1(d, m, y)+daysInPreviousYears(y);
    
    return totaldays;
}

int Calendar::dayOfWeek(int d, int m, int y)
{
    day=d;
    month=m;
    year=y;
    
    int weekday=0;
    
    weekday=daysSinceStartOfTime(d, m, y)%7+1;
    
    return weekday;
    
}

void Calendar::createCalendar(int m, int y)
{
    day=1;
    month=m;
    year=y;
    
    bool stopaddition=false;
    int startofweek=dayOfWeek(day, month, year);
    
    if(startofweek==7)
    {
        startofweek=0;
    }
    
    cout<<"Su Mo Tu We Th Fr Sa"<<endl;
    
    //calender setup
    for(int i=0;i<5;i++)
    {
        for(int j=startofweek;j<7;j++)
        {
            cal[i][j]=day;
            
            if(day+1<=daysInMonth()&&stopaddition==false)
            {
                day++;
            }
            else
            {
                stopaddition=true;
                day=0;
            }
            startofweek=0;
        }
    }
    
    //print calender
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<7;j++)
        {
            if(cal[i][j]==0)
            {
                cout<<"   ";
            }
            else
            {
                if(cal[i][j]<10)
                {
                    cout<<cal[i][j]<<"  ";
                }
                else
                {
                    cout<<cal[i][j]<<" ";
                }
            }
        }
        cout<<endl;
    }
}

int main()
{
    Calendar C;
    
    C.createCalendar(3,2015);
    
    return 0;
}