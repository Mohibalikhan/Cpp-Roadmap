#include<iostream>
using namespace std;

int main()

// Create a three-function calculator for old-style English currency, where money amounts
// are specified in pounds, shillings, and pence. (See Exercises 10 and 12 in Chapter 2.)
// The calculator should allow the user to add or subtract two money amounts, or to multiply a money amount by a floating-point number. (It doesn’t make sense to multiply two
// money amounts; there is no such thing as square money. We’ll ignore division. Use the
// general style of the ordinary four-function calculator in Exercise 4 in this chapter.)

{
	int pounds1, shillings1, pence1, pounds2, shillings2, pence2;
	char option,choose;
		

	do{
		char temp;
		cout << "Enter first amount: \x9c";
		cin >> pounds1 >> temp >> shillings1 >> temp >> pence1;
		cout << "Enter second amount: \x9c";
		cin >> pounds2 >> temp >> shillings2 >> temp >> pence2;
		
		cout << "Operation +, -, *: ";
		cin >> option;
		
		switch(option){
			case '+':
				pounds1 += pounds2;
				shillings1 += shillings2;
				pence1 += pence2;
				break;
			case '-':
				pounds1 -= pounds2;
				shillings1 -= shillings2;
				pence1 -= pence2;
				break;
			case '*':
				pounds1 *= pounds2;
				shillings1 *= shillings2;
				pence1 *= pence2;
				break;	
			default:
				cout << "Invalid option" << endl;
				break;
				
		}

		cout << "Result of " << option << " is \x9c" << pounds1 << "." << shillings1 << "." << pence1 << endl; 
		cout << "Do you want to continue (y/n): ";
		
		cin >> choose;
	}while(choose == 'y');
	return 0;
}