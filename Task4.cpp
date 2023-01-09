#include <iostream>

bool oddishorevenish(int num);

using namespace std;
int main()
{
 double num,result,result2;
 cout <<"Enter 5 digit number only: ";
 cin >>num;
   
  result =oddishorevenish(num);
  if(result == 1 )
  { 
   cout<<"odd";
   }
  else
  result2 = oddishorevenish(num);
  if(result2 == 0)
 { 
  cout<<"even";
  }  
}
bool oddishorevenish(int num)
 {
   int a,b,c,d,e,f,digit1,digit2,digit3,digit4,digit5,sum ;
   digit1 = num%10;
    a = num/10;
    digit2 = a % 10;
    b = a/10;
    digit3 = b%10;
    c = b/10;
    digit4 = c%10;
    d = c/10;
    digit5 = d%10;
    e = d/10; 
    
   sum=digit1+digit2+digit3+digit4+digit5  ;
   
   if (sum % 2 == 1)
   {
     return 1;
    }
    if (sum % 2 == 0)
   {
     return 0;
    }

 }
