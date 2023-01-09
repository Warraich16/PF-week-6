#include<iostream>

using namespace std;

string numname(int number);
string digitName(int digit);

int main()
{

   int number,a,digit;
   string namenumber;
   string nameDigit;

   cout<<"ENTER NUMBER: ";
   cin>>number;

    digit = number % 10;
        a   = number - digit;        

    namenumber = numname(a);
    nameDigit  = digitName(digit);

   cout<<namenumber<<" "<<nameDigit;

}



string numname(int number)
{
     string numbername;
     if(number == 10)
     {
 
         numbername= "Ten";
     }

     if(number == 20)
     {
 
         numbername= "Twenty";
     }

     if(number == 30)
     {
 
         numbername= "Thirty";
     }

    if(number == 40)
    {
 
         numbername = "Fourty";
     }

    if(number == 50)
    {
 
         numbername= "Fifty";
     }

    if(number == 60)
     {
 
         numbername="Sixty";
     }

    if(number == 70)
     {
 
         numbername= "Seventy";
     }

    if(number == 80)
     {
 
         numbername= "Eighty";
     }

    if(number == 90) 
     {
 
         numbername = "Ninty";
     }
      return numbername;
}

string digitName(int digit)
    {

    string nameDigit;
  
     if(digit == 1)
     {
 
         nameDigit= "One";
     }

     if(digit == 2)    {
 
         nameDigit= "Two";
     }

     if(digit == 3)
     {
 
         nameDigit= "Three";
     }

    if(digit == 4)
    {
 
         nameDigit= "Four";
     }

    if(digit == 5)
    {
 
         nameDigit= "Five";
     }

    if(digit == 6)
    {
 
         nameDigit= "Six";
     }

    if(digit == 7)
     {
 
         nameDigit= "Seven";
     }

    if(digit == 8)
    {
 
         nameDigit= "Eight";
     }

    if(digit == 9)
     {
 
         nameDigit= "Nine";
     }

    return nameDigit;
}
