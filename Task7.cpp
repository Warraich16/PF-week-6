#include <iostream>
using namespace std;
float pool(float Vpool,float ratep1,float ratep2,int hours);
int main()
{
 int Vpool,ratep1,ratep2,hours,a,b;
 float pool_percent,p1_percent,p2_percent,overflow,totalrate;
 cout <<"Enter the volume of the pool in liters in the range of 1 - 10000 : ";
 cin >>Vpool;
 cout <<"Enter the flow rate of the first pipe per hour in the range of 1 - 5000: ";
 cin >>ratep1;
  cout <<"Enter the flow rate of the second pipe per hour in the range of 1 - 5000: ";
 cin >>ratep2;
 cout <<"ENter the number of hours when the worker is absent: ";
 cin >>hours;

  pool(Vpool,ratep1,ratep2,hours);

}
float pool(float Vpool,float ratep1,float ratep2,int hours)
{
  int a,b;
  float totalrate,overflow,p1_percent,p2_percent,pool_percent;
 a = ratep1*hours;
 b = ratep2*hours;
 totalrate = a+b;


   if (totalrate < Vpool)
 {

 pool_percent = (totalrate/Vpool)*100;
 
 p1_percent = (a/totalrate)*100;
 
 p2_percent = (b/totalrate)*100;
  
 cout <<"The pool is "<<pool_percent<<"% : P1 pipe: "<<p1_percent<<"% :P2 pipe: "<<p2_percent; 
 return 0;
}
  if (totalrate > Vpool)
  { 
    overflow = totalrate - Vpool;
    cout <<"overflow is given :"<<overflow;
  return 0;
   }


} 
 




