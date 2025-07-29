#include<iostream>
using namespace std;
int main()

// 10. Create a structure called sterling that stores money amounts in the old-style British
// system discussed in Exercises 8 and 11 in Chapter 3, “Loops and Decisions.”
//  The members could be called pounds, shillings, and pence, all of type int. The program should
// ask the user to enter a money amount in new-style decimal pounds (type double), convert it to the old-style system, store it in a variable of type struct sterling, and then
// display this amount in pounds-shillings-pence format.

{
struct sterling{
    int pounds, shillings, pence; 
};


    sterling amount;
    float Pounds;
	cout << "Enter Decimal pounds: ";
	cin >> Pounds;

	amount.pounds = static_cast<int>(Pounds);
	float fracPounds = Pounds - amount.pounds;

	float dShillings =  fracPounds * 20;
	amount.shillings = static_cast<int>(dShillings);
	float fracShillings = dShillings - amount.shillings;

	amount.pence = static_cast<int>(fracShillings * 12);
	
	cout << "Equivalent in old notation: " << amount.pounds << "." << amount.shillings << "." << amount.pence << endl;
	
    return 0;
}