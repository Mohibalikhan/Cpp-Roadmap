#include<iostream>
using namespace std;
int main()
// *3. Write a program that generates the following output:
// 10
// 20
// 19
// Use an integer constant for the 10, an arithmetic assignment operator to generate the 20,
// and a decrement operator to generate the 19.

{
    const int x=10;
     cout<<x<<endl;
     int twenty=x;
     twenty+=10;
     cout<<twenty<<endl;
     --twenty;
    cout<<twenty<<endl;
}