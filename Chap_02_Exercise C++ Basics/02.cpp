#include<iostream>
#include<iomanip>
using namespace std;
int main()

// *2. Write a program that generates the following table:
// 1990 135
// 1991 7290
// 1992 11300
// 1993 16200
// Use a single cout statement for all output.
{
    int x=1990;
    cout<<x<<"   "<<135<<endl<<++x<<"  "<<7290<<endl<<++x<<setw(6)<<11300<<endl<<++x<<setw(6)<<16200<<endl;
}


