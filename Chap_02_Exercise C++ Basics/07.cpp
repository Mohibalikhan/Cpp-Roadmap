#include<iostream>
using namespace std;
int main()

// 7. You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying
// by 9/5 and adding 32. Write a program that allows the user to enter a floating-point number representing degrees Celsius,
//  and then displays the corresponding degrees Fahrenheit.
{
  float celsius ;
  cout<<"Enter Degree in Celsius: ";
  cin>>celsius;
  float fahrenheit = (celsius*9/5)+32;
  cout<<"Degree in Fahrenheit: "<<fahrenheit;
  return 0;
  
}