#include<iostream>
using namespace std;
int main ()

// On a certain day the British pound was equivalent to $1.487 U.S., the French franc was
// $0.172, the German deutschemark was $0.584, and the Japanese yen was $0.00955.
// Write a program that allows the user to enter an amount in dollars, and then displays this
// value converted to these four other monetary units.
// 
{
float british=1.487 ,Pakistan=280, french=0.172, German=0.584, Japanese=0.00955 ;
float dollar;
cout<<"Enter the amount in dollar: ";
cin>>dollar;
cout<<"Your Amount in Pound= "<<dollar*british<<endl;
cout<<"Your Amount in franc= "<<dollar*french<<endl;
cout<<"Your Amount in Deutschemark= "<<dollar*German<<endl;
cout<<"Your Amount in Yen= "<<dollar*Japanese<<endl;
cout<<"Your Amount in Pkr= "<<dollar*Pakistan<<endl;
}