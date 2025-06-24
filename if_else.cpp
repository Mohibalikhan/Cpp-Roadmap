#include <iostream>
using namespace std;
int main()
// {
//     int myage;
//     int cnicage=18;
//     cout <<"Enter Your Age:";
//     cin>>myage;
//     if(myage>=cnicage)
//     {
//         cout<<"Congrats u are Eligible";
//     }
//     else{
//         cout<<"Sorry u are not eligible";
//     }
// }

// Write a program that checks 
//if a person is eligible to donate blood (must be at least 18 years old,
// weigh at least 50 kg, and not have any blood-borne diseases).
// {
//     int donorage;
//     int donorweight;
//     string blooddisease;

//     cout<<"Enter Your Age:";
//     cin>>donorage;

//     cout<<"Enter Your Weight:";
//     cin>>donorweight;

//     cout<<"Have Blood_Borne Disease:Y or N"<<endl;
//     cin>>blooddisease;

//     if(donorage>=18 && donorweight>=50 && blooddisease=="N" )
//     cout <<"You are eligible"<<endl;
//     else{
//     cout<<"You are not eligible";
//     }
//     return 0;
// }


// Discount Calculator: 
// Create a program that gives a 10% discount if a customer is either a senior citizen (age 60+) OR has 
// a membership card, and their purchase is over $50.
{
   
   int age;
   cout<<"Enter Your Age:";
   cin>>age;

   string card;
   cout<<"U hava a Membership card (Yes or NO)";
   cin>>card;

   int purchase;
   cout<<"Enter Purchasing Amount";
   cin>>purchase;
   if (age>=60 || card =="Yes" && purchase>=50)
   cout<<"Congrats u have a 10% Discount"<<endl;
   else{
    cout<<"U have not avail discount";
   }
}