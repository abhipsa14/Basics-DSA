#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    int totalseconds=time(0);
    int currentsecond=totalseconds%60;
    int totalminutes=totalseconds/60;
    int currentminute=totalminutes%60;
    int totalhours=totalminutes/60;
    int currenthour=totalhours%24;
    cout<<"Current time is "<<currenthour<<":"
    <<currentminute<<":"<<currentsecond<<" GMT"<<endl;
    return 0;

}