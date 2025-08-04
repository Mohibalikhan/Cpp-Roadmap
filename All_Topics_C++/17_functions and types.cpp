#include<iostream>
using namespace std;

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


//Function with no arguments and no return value
/*void square(void)
{
    int no;
    cout << "Enter a number: ";
    cin >> no;
    cout << "Square of " << no << " is " << (no * no) << endl;
}
int main()
{
    // Call the square function
    square();
    return 0;
}
*/

/*
//Function with Arguments but not return a value
void add (int,int);
int main()
{
    int a,b;
    cout<<"Enter 1 number:";
    cin>>a;
    cout<<"Enter 2 number:";
    cin>>b;
    add(a,b);
    return 0;

}
void add(int x,int y)
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
    cout<<"Enter a number :";
    cin>>no;
    ans=sqr(no);
    cout<<"Square is ="<<ans;
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

int main()
{

    int const x=10;
    int y=20;
   // x=x+10; //not work bcoz x is constant in this process
    y=y+x;
    cout<<y;
//    return 0;
}
*/


//in this program we will learn about function overloading
// ak hi name hoga function ka lekin kam alag hoga iska

int calc(int,int);
int calc(int);

int main ()
{
    int s,x,y;
    cout<<"Enter a number:";
    cin>>s;
    cout<<"Square is:"<<calc(s);
    cout<<"\nEnter two numbers:";
    cin>>x>>y;
    cout<<"Addition is:"<<calc(x,y);
}
int calc(int v)
{
    return (v*v);
}
int calc (int e,int f)
{
    return (e+f);
}

