#include<iostream>
using namespace std;
int main()


// String Concatenation with + 
// {
//     string firstname = "Mohib ";
//     string lastname = "Ali ";
//     string fullname = firstname+lastname+"Khan";
//     cout<<fullname;
//     return 0;
// }



//String Concatenation with append function
// {
//     string firstname = "Mohib ";
//     string lastname = "Ali ";
//     firstname.append(lastname);
//     cout<<firstname;
//     return 0;
// }



//String with specific word with the help append function
// {
//     string firstname = "Mohib ";
//     string lastname = "Ali Khan"; //index no dekh raha ha yahan se Ali Khan
//     firstname.append(lastname,4,7);                              //01234567  
//     cout<<firstname;
//     return 0;
// }



// String Comparison (password match karne kelia use hota ha )
// {
//     string password = "Mohib";
//     string userpass;
//     cout<<"Enter Password: ";
//     cin>>userpass;
//     if (password==userpass)
//     {

//         cout<<"Congrats its unlock!";
//     }
//     else{
//         cout<<"Wrong Password!";
//     }
    
//     return 0;
// }



// String Compare function with integer return 
// 0 if both are equal 
// value < 0 if first is shorter than second or first character that doesnot match is smaller
// value > 0 if first is longer than second or first character that doesnot match is greater

// {
//     string first = "Mohibalikhan";
//     string Second ="Mohibali";
    
//     int val = first.compare(Second);
//     if (val==0)
//     {

//         cout<<"Congrats its Equal!";
//     }
//     else if(val>0) {
//         cout<<"First is longer than Second!";
//     }
//     else{
//         cout<<"First is shorter than Second!";
//     }
    
//     return 0;
// }



// Copy a String 
// {
//     string center = "C++ Programming";
//     string wasay=center;
//     cout<<wasay; 
// }



// Length and Size of a String 
{

    string center = "C++ Programming";
    
    cout<<"Length of Center is: "<<center.length();
    cout<<"\nSize of Center is: "<<center.size(); 
}




 