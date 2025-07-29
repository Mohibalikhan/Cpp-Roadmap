#include<iostream>
using namespace std;
int main()

// 12. Revise the four-function fraction calculator program of Exercise 12 in Chapter 3 so that
// each fraction is stored internally as a variable of type struct fraction, as discussed in
// Exercise 8 in this chapter.


{
	struct fraction{
	int num, den;
};

	char ch;
    fraction num1, num2, num3;

	do{
		char temp, oper;
		cout << "Enter first fraction: ";
	    cin >> num1.num >> temp >> num1.den;
		cout << "Operation: ";
		cin >> oper;
		cout << "Enter second fraction: ";
	    cin >> num2.num >> temp >> num2.den;

		switch(oper){
			case '+':
				num3.num = num1.num * num2.den + num1.den * num2.num;
				num3.den = num1.den * num2.den;
				cout << "Sum is: " << num3.num << "/" << num3.den << endl;
				break;
			case '-':
				num3.num = num1.num * num2.den - num1.den * num2.num;
				num3.den = num1.den * num2.den;
				cout << "On Subtraction: " << num3.num << "/" << num3.den << endl;
				break;
			case '*':
				num3.num = num1.num * num2.num;
				num3.den = num1.den * num2.den;
				cout << "Multiplication is: " << num3.num << "/" << num3.den << endl;
				break;
			case '/':
				num3.num = num1.num * num2.den;
				num3.den = num1.den * num2.num;
				cout << "Division is: " << num3.num << "/" << num3.den << endl;
				break;
			default:
				cout << "Invalid option";
				break;
		
		}
		cout << "Do you want to continue (y/n): ";
		cin >> ch;
	}while(ch == 'y');
	
	return 0;
}


