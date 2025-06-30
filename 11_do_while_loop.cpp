#include<iostream>
using namespace std;
int main()
{
    char state;
    do{
        int x;
        cout<<"Enter a number: "<<endl;
        cin>>x;
        int y;
        cout<<"Enter Another number: "<<endl;
        cin>>y;
        cout<<"The sum is: "<<x+y<<endl;
        
        cout<<"if u try more (y/n)"<<endl;
        cin>>state;
    }
    while (state!='n');
    return 0 ;
    
}