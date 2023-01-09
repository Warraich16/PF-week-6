#include <iostream>
bool symmetrical(int number);

using namespace std;
int main()
{
 int number,answer; 
 cout <<" Enter three digit number: ";
 cin >>number;
 answer = symmetrical(number);
 cout <<answer;
 if (answer==true)
  {
   cout <<" The number is symmetrical: "<<endl;
   }
   if (answer!=true)
  {
   cout <<" The number is not symmetrical: "<<endl;
   }

}
bool symmetrical(int number)
{
 int digit,digit1,digit2,digit3,digit4,a,b,c,d;
 digit1 = number % 10;
     a = digit/10;
 
 digit2 = a % 10;
     b  = a/10;
 digit3 = b % 10;
      c = b/10; 
 digit4 = c % 10;
      d = c/10; 
 if (digit1 == digit4)
  {
     return true;
     }
  if (digit1!=digit4)
  {
    return false;
  }
}
 