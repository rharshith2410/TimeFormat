#include<iostream>
using namespace std;
class TimeDisplay {
    private :
          int a,b,c;
          int s;

    public :
            EnterTime(){
                cout<<"Enter the time:";
                cout<<"Number of Hours:";
                cin>>a;
                cout<<"Number of Minutes:";
                cin>>b;
                cout<<"Number of seconds:";
                cin>>c;

            }
            TimeSeconds(){
                 
                 s = a*3600 + b*60 + c;
                 

            }
            DisplayResult(){
                cout<<"Time is HH:MM:SS format is "<<a<<":"<<b<<":"<<c;
                cout<<"\nThe total number of seconds is:"<<s;

            }

};



main()
{
    TimeDisplay t1;
    t1.EnterTime();
    t1.TimeSeconds();
    t1.DisplayResult();
}

