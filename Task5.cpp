#include <iostream>
using namespace std;
int time(int hours,int minutes);
int main()
{
 int hours,result,a, total_minutes, total_hours,b;
 float minutes;


  cout <<"Enter hours: "<<endl;
  cin >>hours;
  cout <<"Enter minutes: "<<endl;
  cin >>minutes;
  time(hours,minutes);

}
int time(int hours,int minutes)
{
  int a, total_minutes, total_hours,b;
             a = hours*60;
 total_minutes = minutes+a+15;
 total_hours   = total_minutes/60;
             b = total_minutes%60;
 
     cout <<total_hours<<":"<<b;
  return 0;

}