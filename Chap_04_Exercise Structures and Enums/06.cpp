#include<iostream>
using namespace std;

int main()

// 6. We said earlier that C++ I/O statements don’t automatically understand the data types of
// enumerations. Instead, the (>>) and (<<) operators think of such variables simply as integers. You can overcome this limitation by using switch statements to translate between
// the user’s way of expressing an enumerated variable and the actual values of the enumerated variable. For example, imagine an enumerated type with values that indicate an
// employee type within an organization:
// enum etype { laborer, secretary, manager, accountant, executive,
// researcher };
// Write a program that first allows the user to specify a type by entering its first letter
// (‘l’, ‘s’, ‘m’, and so on), then stores the type chosen as a value of a variable of type
// enum etype, and finally displays the complete word for this type.
// Enter employee type (first letter only) laborer, secretary, manager,accountant, executive, researcher): a
// Employee type is accountant.
// You’ll probably need two switch statements: one for input and one for output.

{
    enum etype { laborer, secretary, manager, accountant, executive,researcher };
    
    char result;
    cout<<"Enter employee type (first letter only) laborer, secretary, manager,accountant, executive, researcher):";
    cin>>result;

    switch (result)
    {
        case 'l':
        cout<<"Employee type is laborer";
        break;
        case 's':
        cout<<"Employee type is Secretary";
        break;
        case 'm':
        cout<<"Employee type is Manager";
        break;
        case 'a':
        cout<<"Employee type is Accountant";
        break;
        case 'e':
        cout<<"Employee type is Executive";
        break;
        case 'r':
        cout<<"Employee type is Researcher";
        break;
    
    default:
    cout<<"You enter wrong alphabet";
        break;
    }

    return 0;
}


