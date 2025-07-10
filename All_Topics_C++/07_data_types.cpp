#include<iostream>
using namespace std;
int main()
{
   unsigned short age=65000; //integar se choti data type ha ye minus -32000 se +32000 tak lega ye value
   cout<<age<<endl;
    
    cout << "Size of bool: " << sizeof(bool) << " byte\n";
    cout << "Size of char: " << sizeof(char) << " byte\n";
    cout << "Size of short: " << sizeof(short) << " byte\n";
    cout << "Size of int: " << sizeof(int) << " bytes\n";
    cout << "Size of float: " << sizeof(float) << " bytes\n";
    cout << "Size of long: " << sizeof(long) << " byte\n";  //Integer (poori numbers, bina decimal ke)
    cout << "Size of double: " << sizeof(double) << " byte\n"; //Floating-point (decimal values)
    return 0;

}