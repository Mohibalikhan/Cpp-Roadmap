// Arrays in C++ are used to store multiple values in a single variable.instead of declaring separate variables for each value
# include<iostream>
using namespace std;
int main ()

// {
//     //datatype variablename [no of elements which hold an array]= { }
//     int no [4]={23,45,65,34};
//     cout<<no[2];
//     return 0;
// }



// {
//     string name;
//     cout<<"Enter your Name: ";
//     // cin>>name;
//     // cout<<name.size()<<endl; //this will not count spaces

//     getline(cin,name); //this will also count spaces
//     cout<<name.size()<<endl;
    
// }



// Loop Through an Array which print the all elements of an array
// {
// string cars [3] ={"Mehran","Cultus","Alto"};
//  for (int i=0;i<=2;i++)
// {
//     cout<<cars[i]<<endl;
// }

// }



// Create an array of integers and print using for each loop
// {
// int myNumbers[5] = {10, 20, 30, 40, 50};

// // Loop through integers
// for (int i : myNumbers) {
//   cout << i << "\n";
// }
// }



// { 
//     int age [4]; //array lia 4 ages ka 
    
//     for(int j = 0 ; j<=3;j++)
//     { //yahan mene for loop ka use kia ha
//         cout<<"Enter Age: ";
//         cin>>age[j];
//     }
//     for (int j:age)
//     {  //yahan mene for each loop ka istemal karlia
//         cout<<"You Entered: "<<j<<endl;
//     } 
// }



// Sum of Array Elements
// Ek array lo aur uske saare elements ka sum nikaalo using loop.
// {
//     int sum=0;
//     int num [5]={10,20,30,40,50};
//     for(int j=0;j<5;j++)
// {
//   sum += num[j];
// }
// cout <<"Your sum is: "<<sum<<endl;
// }



// Find Maximum Element in Array
// Kisi array ka sabse bada number dhoondo.
// {
//     int numbers [3]={10,50,80};
//     int max = numbers[0];
//     for (int i = 0; i < 3 ;i++)
//     {
//         if (max<numbers[i]) //Agar koi aur number max se bada hai to...
//         max=numbers[i]; //us number ko max bana do.
//     }
//     cout<<max<<endl;
// }



// {
//     int numbers [5]={5,10,70,2,89};
//     int result = numbers [0];
//     for (int i=0 ; i<5;i++)
//     {
//         if(result>numbers[i]) //Agar koi aur number result se chota hai to...
//         result=numbers[i];          // us number ko max bana do.
//     }
//     cout<<result<<endl;

// }


// {
//     int arr[2][3] = {{1,2,3},{4,5,6}}; // 2 rows, 3 columns

//     for (int i =0;i<2;i++ ){
//         for (int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }


// int main() {
//     int arr[2][3] = {{1, 2, 3}, {3, 4, 5}}; // 2 rows, 3 columns

//     cout << "2D Array:\n";

//     for (int i = 0; i < 2; i++) {         // Loop through rows
//         for (int j = 0; j < 3; j++) {     // Loop through columns
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;  // Newline after each row
//     }

//     return 0;
// }




// {
//     // Why did the result show 20 instead of 5, when the array contains 5 elements?
//     //because array me integer ha or ak integer 4 byte ka bara ha to hum 4x5=20
//     int mynum []={2,4,5,9,80};
//     cout<<sizeof(mynum)<<endl;
//     int totalnum=sizeof(mynum)/sizeof(mynum[0]);
//     cout<<"Total elements in array: "<<totalnum;

// }

//Same print ka kam karta ha ye be
// {
// int myNumbers[6] = {10, 20, 30, 40, 50,89};
// for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++) {
//   cout << myNumbers[i] << "\n";
// }
// }


//Array me input lene kelia
{
    int numbers[5]={};
    
    for (int i = 1;i<=5;i++)
    {
        cout<<"Enter "<<i<< " number: ";
        cin>>numbers[i];  
    }
    for (int j = 1 ;j<=5;j++)
    {  
       cout<<"You Entered :"<<numbers[j]<<endl;
    }
}
