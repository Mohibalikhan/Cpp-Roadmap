// if you don’t know how many times you want to do something before you start the loop? In this case a different kind of
// loop may be used: the while loop.
#include <iostream>
using namespace std;
int main()
// {
//     int x=1;
//     while(x<10){
//     cout<<x<<endl;
//     x++;
//     }

// }



// Create a pin if not match show incorrect password
{
    int pin;
    cin>>pin;
    
    while(pin!=9999){
        cout<<"Incorrect pin"<<endl;
        cin>>pin;
    }
}
