#include<iostream>
using namespace std;


// User defined function with no return type and no parameters
// void disp (void); // na lega na dega ye function

// int main(){
//     disp(); //function call
//     return 0;
// }

// void disp (void) //function defination
// {
//     cout<<"This is User defined function";
// }



//Function with no arguments and no return value
// void square(void) //function prototype

// {
//     int no;
//     cout << "Enter a number u want to Square: ";
//     cin >> no;
//     cout << "Square of " << no << " is " << (no * no) << endl; //function define
// }
// int main()
// {
//     // Call the square function
//     square();                     
//     return 0;
// }



/*
//Function with Arguments but not return a value
void add (int,int); //function prototype

int main()
{
    int a,b;
    cout<<"Enter 1 number:";
    cin>>a;
    cout<<"Enter 2 number:";
    cin>>b;
    add(a,b); //function call
    return 0;

}
void add(int x,int y)  //function defination
{
    int c;
    c=x+y;
    cout<<"Addition is ="<<c;
}
*/



/*
//function with argument and return a value
int sqr(int);
int main()
{
    int no,ans;
    cout<<"Enter a number u want Square:";
    cin>>no;
    ans=sqr(no);
    cout<<"Square is: "<<ans;
    return 0;
}
int sqr (int x)
{
    return (x*x);
}
*/



/*
//function with no arguments and return a value

int add(void);
int main()
{
    int ans;
    ans=add();
    cout<<"Addition is "<<ans;
    return 0;
}
int add(void)
{
    int a,b;
    cout<<"Enter 1 number ";
    cin>>a;
    cout<<"Enter 2 number ";
    cin>>b;
    return (a+b);
}
*/



/*
//This is called user defined function
int add(void) // no semicolon and this called function prototype
{
    int c;
    c = 100 + 200;    //function body
    return c;
}

int main()
{
    int ans;
    ans = add();
    cout << "The sum is: " << ans << endl; // You might want to print the result
    return 0; // Add a return statement for the main function
}
*/



/*
//Another Example of user defined function
//1)function prototype
//2)finction defination/body
//3)function calling method

void add (int,int);//-->Function prototype
void add (int x,int y) //-->Parameter Defination
{
    int c;
    c=x+y;
    cout<<"Addition is:"<<c;
}
int main()    //-->Function call
{
    int a,b;
    cout<<"Enter 1 number:";
    cin>>a;
    cout<<"Enter 2 Number:";
    cin>>b;
    add(a,b); //-->Arguments in calling method

    return 0;
}
*/
