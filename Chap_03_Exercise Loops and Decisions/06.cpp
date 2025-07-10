#include<iostream>
using namespace std;

int main()

// 6. Modify the FACTOR program in this chapter so that it repeatedly asks for a number and
// calculates its factorial, until the user enters 0, at which point it terminates. You can
// enclose the relevant statements in FACTOR in a while loop or a do loop to achieve this
// effect

{
    
    int x = 0;
    int fact = 1;
    
    do

    {
    int fact = 1;
    cout<<"Enter a number or 0 to exit: ";
    cin>>x;

    for (int i = x ; i>0 ;i--)
    {
        fact *=i;
       
    }
    cout<<fact<<endl;

}
while (x!=0);{
    return 0;
}

}


