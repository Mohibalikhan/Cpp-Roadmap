#include<iostream>
#include<conio.h> //getche() library program which runs until the key is not press 
using namespace std;

int main()

// *3. Operators such as >>, which read input from the keyboard,
//  must be able to convert a series of digits into a number.
//  Write a program that does the same thing.
//  It should allow the user to type up to six digits, and then display the resulting number as a type long
// integer. The digits should be read individually, as characters, using getche().
// Constructing the number involves multiplying the existing value by 10 and then adding
// the new digit. (Hint: Subtract 48 or ‘0’ to go from ASCII to a numerical digit.)


// Here’s some sample interaction:
// Enter a number: 123456
// Number is: 123456


{
    char ch;
    long number = 0;
    int count = 0;

    cout << "Enter a number: ";

    while (count < 6) {
        ch = getche(); // read a character and display it
        if (ch >= '0' && ch <= '9') {
            number = number * 10 + (ch - '0'); // convert ASCII to digit and update number
            count++;
        } else {
            break; // stop if user enters a non-digit character
        }
    }

    cout << "\nNumber is: " << number << endl;

    return 0;
}
