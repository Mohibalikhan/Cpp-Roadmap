#include<iostream>
using namespace std;

int main()
// 8. Write a program that repeatedly asks the user to enter two money amounts expressed in
// old-style British currency: pounds, shillings, and pence. (See Exercises 10 and 12 in
// Chapter 2, “C++ Programming Basics.”) The program should then add the two amounts
// and display the answer, again in pounds, shillings, and pence. Use a do loop that asks the
// user whether the program should be terminated. Typical interaction might be
// Enter first amount: £5.10.6
// Enter second amount: £3.2.6
// Total is £8.13.0
// Do you wish to continue (y/n)?
// To add the two amounts, you’ll need to carry 1 shilling when the pence value is greater
// than 11, and carry 1 pound when there are more than 19 shillings
{
    int pound1,shilling1,pence1;
     int pound2,shilling2,pence2;
     
     char temp;
     char next;
do{
    
     

     cout<<"Enter First Amount: \x9c";
     cin>>pound1>>temp>>shilling1>>temp>>pence1;
     cout<<"Enter Second Amount: \x9c";
     cin>>pound2>>temp>>shilling2>>temp>>pence2;
     
    pound1 += pound2;
	shilling1 += shilling2;
	pence1 += pence2;

    if(pence1 > 11){
			shilling1 += (pence1/12);
			pence1 = pence1%12;
		}
		if(shilling1 > 19){
			pound1 += (shilling1/20);
			shilling1 = shilling1%20;
		}
     cout<<"Total is: \x9C"<<pound1<<'.'<<shilling1<<'.'<<pence1<<endl;
     cout<<"Do you wish to continue (y/n)?";
     cin>>next;
}

    while (next!='n'); //jab tak ye n na kare jab tak chalte jao 

}

