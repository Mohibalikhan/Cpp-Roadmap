#include<iostream>
using namespace std;

int main()

// 12. Create a four-function calculator for fractions. (See Exercise 9 in Chapter 2, and
// Exercise 4 in this chapter.) Here are the formulas for the four arithmetic operations
// applied to fractions:
// Addition: a/b + c/d = (a*d + b*c) / (b*d)
// Subtraction: a/b - c/d = (a*d - b*c) / (b*d)
// Multiplication: a/b * c/d = (a*c) / (b*d)
// Division: a/b / c/d = (a*d) / (b*c)
// The user should type the first fraction, an operator, and a second fraction. The program
// should then display the result and ask whether the user wants to continue


{
    string result ;
    int a,b,c,d;
    char slash,oper,next;
do{
    cout<<"Enter first fraction eg:(1/2) : ";
    cin>>a>>slash>>b;

    cout<<"Enter operation u perform : ";
    cin>>oper;
    
    cout<<"Enter Second fraction eg:(2/5) : ";
    cin>>c>>slash>>d;
    
    switch (oper)
    {
    case '+':
        cout<<"Addition = "<<a*d + b*c<<slash<<b*d<<endl;
        break;
    
    case '-':
        cout<<"Substraction = "<<a*d - b*c <<slash<<b*d<<endl;
        break;

    case '*':
        cout<<"Multiplication = "<<a*c<<slash<<b*d<<endl;
        break;

    case '/':
        cout<<"Division = "<<a*d<<slash<<b*c<<endl;
        break;

    
    
    default:
        break;
    }


    cout<<"Do u want to continue: (y/n):";
    cin>>next;
}
    while (next=='y');
    return 0 ;
}
