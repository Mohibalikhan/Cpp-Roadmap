# include<iostream>
using namespace std;
int main()


{
  struct profile
  {
    string  name;
    short    age;
    char grade;
   }
    std1;
  
  std1.name="Mohib";
  std1.age=22;
  std1.grade='A';
    

  cout<<"Name: "<<std1.name<<endl;
  cout<<"Age: "<<std1.age<<endl;
  cout<<"Grade: "<<std1.grade<<endl;
  
}



// {
//     struct car
//     {
//         string carname;
//         int model;
//         int price;
//     };

//     // Initialize in multiple Line
//     car mycar; 
//     mycar.carname="Cultus";
//     mycar.model=2009;
//     mycar.price=989;


//     // Initialize in one line
//     // car mycar{"Mehran",2009,120000}; //mere  pas ye wale car ki specs han

//     cout<<mycar.carname<<endl;
//     cout<<mycar.model<<endl;
//     cout<<mycar.price<<endl;


//     car myfriendcar; //mere dost ne bhi car li 

//     myfriendcar=mycar; //uske pas bhi yahe wale car ha us specs ke sath

//     cout<<myfriendcar.carname<<endl;
//     cout<<myfriendcar.model<<endl;
//     cout<<myfriendcar.price<<endl;
    
    
// }


// Create a structure to represent a student. It should have the following members:

// name (string)
// age (int)
// grade (char)
// Then:

// Create one variable of the structure.
// Assign values to its members.
// Print the values to the screen.

// {
//    struct profile
//    {
//     string name;
//     int age;
//     char grade;
//    };

//    profile Mohib{"Mohib",22,'A'};

//    cout<<"Name: "<<Mohib.name<<endl;
//    cout<<"Age: "<<Mohib.age<<endl;
//    cout<<"Grade: "<<Mohib.grade<<endl;
   
// }


