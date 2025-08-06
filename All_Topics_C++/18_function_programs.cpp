#include<iostream>
using namespace std;


//In this we make a Addition and Multiplication Function

int add(int a,int b){  
    int c=a+b;
    return c;
}
int multi(int c,int d){
    return c*d;
}

int main()
{
    cout<<"Sum is: "<<add(12,3)<<endl;
    cout<<"Multiply is: "<<multi(12,3);
    return 0;
}




