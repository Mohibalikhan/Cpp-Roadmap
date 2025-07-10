#include<iostream>
using namespace std;

int main()

// *2. Write a temperature-conversion program that gives the user the option of converting
// Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion. Use
// floating-point numbers. Interaction with the program might look like this:
// Type 1 to convert Fahrenheit to Celsius,
// 2 to convert Celsius to Fahrenheit: 1
// Enter temperature in Fahrenheit: 70
// In Celsius that’s 21.111111

{
    cout<<"1. Convert Fahrenhiet to Celsius "<<endl;
    cout<<"2. Convert Celcius to Fahrenhiet "<<endl;
    int x;
    cout<<"Enter a Number: ";
    cin>>x;
    
    switch (x)
    {
    case 1:
    float temf;
    cout<<"Enter temperature in Fahrenhiet: ";
    cin>>temf;
    cout<<"In Celsius: "<<(temf - 32) * 5/9;
    break;

     case 2:
    float temc;
    cout<<"Enter temperature in Celcius: ";
    cin>>temc;
    cout<<"In Fahrenhiet: "<<(temc*9/5)+32;
    break;

    default:
        break;
    }
}