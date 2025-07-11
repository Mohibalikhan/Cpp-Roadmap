#include<iostream>
using namespace std;

int main()

// Write another version of the program from Exercise 7 so that, instead of finding the final
// amount of your investment, you tell the program the final amount and it figures out how
// many years it will take, at a fixed rate of interest compounded yearly, to reach this
// amount. What sort of loop is appropriate for this problem? (Don’t worry about fractional
// years; use an integer value for the year.)


{
	int year=0;
	float famount, iamount,interest,temp;
	
	cout << "Enter final amount u want: ";
	cin >> famount;
	cout << endl << "Enter initial amount u invest ";
	cin >> iamount;
	cout << endl << "Enter interest rate(percent per year): ";
	cin >> interest;

    temp = iamount;

	while(temp<famount){
		temp *= (1+(interest/100));
		year++;
	}
	cout << "It will take " << year << " years at " << interest << " of interest to reach the final amount " << famount << endl;
	return 0;
	
}
    


