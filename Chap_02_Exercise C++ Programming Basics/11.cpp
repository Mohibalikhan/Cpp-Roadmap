#include<iostream>
#include<iomanip> //setw library
using namespace std;
int main()


// By default, output is right-justified in its field. You can left-justify text output using the
// manipulator setiosflags(ios::left). (For now, don’t worry about what this new notation
// means.) Use this manipulator, along with setw(), to help generate the following output:

// Last name   First name    Street address    Town        State
// ------------------------------------------------------------
// Jones      Bernard        109 Pine Lane     Littletown  MI
// O’Brian    Coleen         42 E. 99th Ave.   Bigcity     NY
// Wong       Harry          121-A Alabama St. Lakeville   IL


{
    cout<<setiosflags(ios::left);
    cout<<setw(15)<<"Last name"<<setw(15)<<"First name"<<setw(20)<<"Street address"<<setw(15)<<"Town"<<"State"<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<setw(15)<<"Jones"<<setw(15)<<"Bernard"<<setw(20)<<"109 Pine Lane"<<setw(15)<<"Little Town"<<"MI"<<endl;
    cout<<setw(15)<<"O Brian"<<setw(15)<<"Coleen"<<setw(20)<<"42 E. 99th Ave."<<setw(15)<<"Bigcity"<<"NY"<<endl;
    cout<<setw(15)<<"Jones"<<setw(15)<<"Bernard"<<setw(20)<<"109 Pine Lane"<<setw(15)<<"Little Town"<<"MI"<<endl;
}