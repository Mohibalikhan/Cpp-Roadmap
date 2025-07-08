#include<iostream>
#include<ctype.h>
using namespace std;
int main ()

// A library function, islower(), takes a single character (a letter) as an argument and
// returns a nonzero integer if the letter is lowercase or zero ,
// it is uppercase This function requires the header file CTYPE.H. Write a program that allows the user to enter a letter, and then displays either zero or nonzero, depending on whether a lowercase or
// uppercase letter was entered. (See the SQRT program for clues.

{
char any;

cout<<"Enter a letter: ";
cin>>any;
cout<<islower(any)<<endl;
}
