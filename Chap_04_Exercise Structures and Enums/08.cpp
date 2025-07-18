#include<iostream>
using namespace std;

int main()

// 8. Start with the fraction-adding program of Exercise 9 in Chapter 2, “C++ Programming
// Basics.” This program stores the numerator and denominator of two fractions before
// adding them, and may also store the answer, which is also a fraction.
// Modify the program so that all fractions are stored in variables of type struct fraction, whose two
// members are the fraction’s numerator and denominator (both type int). 
// All fractionrelated data should be stored in structures of this type

{


struct fraction{
	int num, den;
};

{
	fraction num1, num2, num3;

	char temp; //temporary kuch ayega isme jo bhi aye wo show karado
	cout << "Enter first fraction: ";
	cin >> num1.num >> temp >> num1.den;

	cout << "Enter second fraction: ";
	cin >> num2.num >> temp >> num2.den;
  
	num3.num = num1.num * num2.den + num1.den * num2.num;
	num3.den = num1.den * num2.den;
	cout << "Sum is: " << num3.num << temp << num3.den << endl;
    
	return 0;
}
}