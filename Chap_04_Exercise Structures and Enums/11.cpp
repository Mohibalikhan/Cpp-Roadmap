#include<iostream>
using namespace std;

int main()

// 11. Use the time structure from Exercise 9, and write a program that obtains two time values from the user in 12:59:59 format, 
// stores them in struct time variables, converts each one to seconds (type int), adds these quantities, 
// converts the result back to hoursminutes-seconds, stores the result in a time structure, and finally displays the result in
// 12:59:59 format.

{
    struct time
    {
        int hours,min,sec;
        
    };

    time time1,time2,time3;//ye hamse do time lega
    char temp;

    cout<<"Enter time in this format(hours:minutes:seconds):";
    cin>>time1.hours>>temp>>time1.min>>temp>>time1.sec;

    cout<<"Enter time in this format(hours:minutes:seconds):";
    cin>>time2.hours>>temp>>time2.min>>temp>>time2.sec;

    int totalsec1=time1.hours*3600 + time1.min*60 + time1.sec;
    int totalsec2=time2.hours*3600 + time2.min*60 + time2.sec;

    int totalsec = totalsec1 + totalsec2;
    cout<<"Total Seconds: "<<totalsec<<endl;

    time3.hours = totalsec/3600; // total seconds divide karenge to hame hours mil jayenge
    time3.min = time3.hours%3600;// minutes miljaenge
    time3.sec = time3.min%60;//seconds miljaenge

    cout << "Addition of above input time is: " << time3.hours << ":" << time3.min << ":" << time3.sec << endl;

    return 0;
}
