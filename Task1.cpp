#include <iostream>
#include <cmath>
float calculateheight(float base,float degrees);
using namespace std;

int main()
{
 float base;
 float degrees;
 float height;
 cout <<"Enter base: ";
 cin >>base;
 cout <<"Enter degrees: ";
 cin >>degrees;
 height = calculateheight( base, degrees);
 cout <<"The height of the given tree is :"<<height; 



}

float calculateheight(float base,float degrees)
{
 float radian = 57.2958;
 float radians;
 float height;
 float tangent;
 radians = degrees/57.2958;
tangent = tan(radians); 
 height= tangent*base;

 return height;
 


}