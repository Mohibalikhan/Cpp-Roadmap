#include<iostream>
#include <iomanip>
using namespace std;
int main ()

//jab apko pata ho ke mujhe ye chez kitni dafa show karane ha to me for loop use karonga
// 1 se 5 tak numbers print kardo
// {
//     for (int i=1;i<=5;i++)
//     {
//         cout<<i<<endl;
        
//     }
//     return 0;

// }



// Square root in a loop from 1 to 5
// {
//     for (int i=1;i<=5;i++) //(initialization ; condition ; Increment )
//     {
//         cout<<i*i<<endl;
//     }
//         return 0;
// }



//for loop ki madad se table print kia

// {   
//     int x;
//     cout<<"Enter a Number u want a table: ";
//     cin>>x;
//     for( int i=1; i<=10;i++)
//     {
//      cout<<x<<"x"<<i<<"="<<x*i<<endl;
//     }
//     return 0;
// }



// A for loop which only print even numbers
// {
// for (int x=0;x<21;x+=2)
// {
//   cout<<x<<endl;
// }
// }



// User se N ka input lo, aur for loop ka use karke pehle N numbers ka sum calculate karo.
// (Example: N = 5 → Sum = 1 + 2 + 3 + 4 + 5 = 15)
// {
//   int x,sum=0;
//   cout<<"Enter a number you want sum: ";
//   cin>>x;

//   for(int i = 1; i <= x; i++) {
//         sum = sum + i;  // ya sum += i;
  
//     }
//     cout << "Sum hai: " << sum << endl;
// }



//With the help of for loop we create a count down
// {
//     for(int i=10;i>0;i--){

//         cout<<i<<endl;
        
//     }
// }



// {
// int numb; //define loop variable
// for(numb=1; numb<=10; numb++) //loop from 1 to 10
// {
// cout << setw(4) << numb; //display 1st column
// int cube = numb*numb*numb; //calculate cube
// cout << setw(6) << cube << endl; //display 2nd column
// }
// return 0;
// }



// // Thus the factorial of 5 is 5*4*3*2*1, or 120.
// {
//     int x;
//     cout << "Enter a number: ";
//     cin >> x;

//     int fact = 1;
//     for (int j = x; j > 0; j--) {
//         fact *= j;
//     }

//     cout << "Factorial of " << x << " is: " << fact << endl;
//     return 0;
// }



//Create a fabonacci sequence
// {
//     int n;
//     cout << "Enter the number of terms: ";
//     cin >> n;

//     int t1 = 0, t2 = 1, nextTerm;

//     cout << "Fibonacci Series: " << t1 << ", " << t2;

//     for (int i = 3; i <= n; ++i) {
//         nextTerm = t1 + t2;
//         cout << ", " << nextTerm;
//         t1 = t2;
//         t2 = nextTerm;
//     }

//     return 0;

// }



//flowers patterns
{
  int rows;
  cout<<"Enter the rows u want: ";
  cin>>rows;

  for (int i=1;i<=rows;i++){
    for(int j=1;j<=i;j++){
      cout<<"*";
    }
    cout<<endl;
}
return 0;
}


