#include<iostream>
using namespace std;
int main()

//
// {
//     int no;
//     cout<<"1. Play game"<<endl;
//     cout<<"2. Multiplayer game"<<endl;
//     cout<<"3. Exit Game"<<endl;
    
//     cout<<"Enter a Number: ";
//     cin>>no;
    
//     switch (no){
//         case 1:
//         cout<<"Play game"<<endl;
//         break;
//         case 2:
//         cout<<"Multiplayer game"<<endl;
//         break;
//         case 3:
//         cout<<"Exit game"<<endl;
//         break;
//         default:
//         cout<<"Oops u Enter Wrong Number"<<endl;
//         break;
//     }
// }



//Take a number (1 to 7) as input and print the corresponding day of the week.
// {
//     int no;
//     cout<<"Enter a Number: ";
//     cin>>no;
    
//     switch (no){
//         case 1:
//         cout<<"Monday"<<endl;
//         break;
//         case 2:
//         cout<<"Tuesday"<<endl;
//         break;
//         case 3:
//         cout<<"Wednesday"<<endl;
//         break;
//         case 4:
//         cout<<"Thursday"<<endl;
//         break;
//         case 5:
//         cout<<"Friday"<<endl;
//         break;
//         case 6:
//         cout<<"Saturaday"<<endl;
//         break;
//         case 7:
//         cout<<"Sunday"<<endl;
//         break;
//         default:
//         cout<<"Oops u Enter Wrong Number"<<endl;
//         break;
//     }
// }



//Take two numbers and an operator (+, -, *, /) from the user.
// Use a switch statement to perform the operation and print the result
// {
// int x;
// int y;
// cout<<"Enter First No: ";
// cin>>x;
// cout<<"Enter Second No: ";
// cin>>y;

// cout<<"\n1. Addition"<<endl;
// cout<<"2. Subtraction"<<endl;
// cout<<"3. Multiplicaiton"<<endl;

// cout<<"Enter a Operation Number: ";
// int no;
// cin>>no;
// switch (no)
// {
// case 1:
//     cout<<"Your Result is = "<<x+y;
//     break;
// case 2:
//     cout<<"Your Result is = "<<x-y;
//     break;
// case 3:
//     cout<<"Your Result is = "<<x*y;
//     break;
// default:
//     cout<<"U Enter Wrong Number";
//     break;
// }
// }



// Take a character input and use a switch to check if 
// it's a vowel (a, e, i, o, u). If not, print "Consonant".

// {
// char x;

// cout<<"Enter Any Alphabet: ";
// cin>>x;

// switch (x){
// case 'a':
// case 'e':
// case 'i':
// case '0':
// case 'u':
//     cout<<"Vowel";
//     break;
// default:
//     cout<<"Consonant";
//     break;
// }
// }



// Simple Vending Machine (Intermediate)
// Description: Simulate a vending machine with different items (snacks, drinks) selected via numbers.
// Switch Usage:
// === Vending Machine ===
//     1. Coke ($1.50)
//     2. Chips ($1.00)
//     3. Chocolate ($0.75)
//     4. Water ($1.25)
//     5. Gum ($0.50)
//     Enter item number (1-5)

{
    cout<<"=== Vending Machine ==="<<endl;
    cout<<"1. Coke ($1.50)"<<endl;
    cout<<"2. Chips ($1.00)"<<endl;
    cout<<"3. Chocolate ($0.75)"<<endl;
    cout<<"4. Water ($1.25)"<<endl;
    cout<<"5. Gum ($0.50)"<<endl;

    int x;
    cout<<"Enter item number (1-5): ";
    cin>>x;

    switch (x)
    {
    case 1:
        cout<<"You choose Coke ($1.50)";
        break;
    case 2:
        cout<<"You choose Chips ($1.00)";
        break;
    case 3:
        cout<<"You choose Chocolate ($0.75)";
        break;
    case 4:
        cout<<"You choose Water ($1.25)";
        break;
    case 5:
        cout<<"You choose Gum ($0.50)";
        break;
    
    default:
        cout<<"U Enter wrong number";
        break;
    }

}