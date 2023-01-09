#include <iostream>
#include <cmath>

float add(float a,float b,float c);

float sub(float a,float b,float c);

using namespace std;

int main()
{

float a;
float b;
float c;
float whole;
float answer;
cout <<"Enter value of a: ";
cin >>a;
cout <<"Enter value of b: ";
cin >>b;
cout <<"Enter value of c: ";
cin >>c;
whole = add(a,b,c); 
cout<<"The answer by using quadratic formula with positive sign is : "<<whole <<endl;
answer = sub(a,b,c);
cout <<"The answer by using quadratic formula with negative sign is : "<<answer << endl;

}
 float add(float a,float b,float c)
{
   float disc;
   float sqroot;
   float sub; 
   float whole;
   disc = (b*b)-(4*a*c);
   sqroot = sqrt(disc);
   sub = -b+sqroot;
   whole = sub/(2*a);

   return whole;
}
float sub(float a,float b,float c)
{
   float disc;
   float sqroot;
   float sub; 
   float whole;
   float answer;
   disc = (b*b)-(4*a*c);
   sqroot = sqrt(disc);
   sub = -b-sqroot;
   answer = sub/(2*a);

  return answer;






}