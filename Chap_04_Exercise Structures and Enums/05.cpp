#include<iostream>
using namespace std;

int main()

// 5. Create a structure of type date that contains three members: the month, the day of the
// month, and the year, all of type int. (Or use day-month-year order if you prefer.) Have
// the user enter a date in the format 12/31/2001, store it in a variable of type struct date,
// then retrieve the values from the variable and print them out in the same format.

{
    struct date
    {
        int day,month,year;

    };
    date userdate;
    char slash;
    cout<<"Enter Date: ";
    cin>>userdate.day>>slash>>userdate.month>>slash>>userdate.year;
    cout<<userdate.day<<slash<<userdate.month<<slash<<userdate.year; 

}