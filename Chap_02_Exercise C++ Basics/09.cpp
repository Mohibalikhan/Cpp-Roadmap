#include<iostream>
using namespace std;
int main()

// Write a program that encourages the user to enter two fractions, and then displays their
// sum in fractional form. (You dont need to reduce it to lowest terms.) The interaction with the user might look like this:
// Enter first fraction: 1/2
// Enter second fraction: 2/5
// Sum = 9/10
// You can take advantage of the fact that the extraction operator (>>) can be chained to
// read in more than one quantity at once:
// cin >> a >> dummychar >> b;

{
     int a,b,c,d;
     char slash;
    
    cout<<"Enter first fraction eg:(1/2) : ";
    cin>>a>>slash>>b;
    
    cout<<"Enter Second fraction eg:(2/5) : ";
    cin>>c>>slash>>d;

    cout<<"Sum = "<<a*d + b*c<<slash<<c*d<<endl;
  
}

