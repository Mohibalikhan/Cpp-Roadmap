#include<iostream>
using namespace std;
int main()

// *1. Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to
// enter a number of gallons, and then displays the equivalent in cubic feet
{
  float cubic = 7.481;
  unsigned gallons ;
  cout<<"Enter Numbers of gallons u have: ";
  cin>>gallons;
  cout<<"Your Gallons contain "<<cubic*gallons<<" Cubic foot";
}


