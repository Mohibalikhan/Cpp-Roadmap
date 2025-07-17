#include<iostream>
using namespace std;

//Start pdf page no 184

int main()
// *1. A phone number, such as (212) 767-8900, can be thought of as having three parts: the
// area code (212), the exchange (767), and the number (8900). Write a program that uses a
// structure to store these three parts of a phone number separately. Call the structure
// phone. Create two structure variables of type phone. Initialize one, and have the user
// input a number for the other one. Then display both numbers. The interchange might
// look like this:
// Enter your area code, exchange, and number: 415 555 1212
// My number is (212) 767-8900
// Your number is (415) 555-1212

{
    struct phone
    {
        int areacode=212;
        int exchange=767;
        int number=8900;
    };

    phone mynumber,yournumber;


    
    cout <<"Enter your area code, exchange, and number: ";
    cin>>yournumber.areacode>>yournumber.exchange>>yournumber.number;

    cout <<"My number is "<<"("<<mynumber.areacode<<")"<<" "<<mynumber.exchange<<"-"<<mynumber.number<<endl;

    cout<<"Your number is "<<"("<<yournumber.areacode<<")"<<" "<<yournumber.exchange<<"-"<<yournumber.number;
    
    
}
