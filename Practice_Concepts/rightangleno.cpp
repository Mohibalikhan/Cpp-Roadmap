#include<iostream>
using namespace std;

int main()
// 1
// 2 3
// 4 5 6
// 7 8 9 10


{
    int num =1;
    for (int i = 1;i<=4;i++) { //rows han ye 

        for (int j = 1;j<=i;j++){ //columns kelia (matlab jitni rows utne columns)
        cout<<num<<" ";
        num++;

        }
        cout<<endl;

    }
}    


