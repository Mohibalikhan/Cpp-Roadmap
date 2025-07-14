#include<iostream>
#include<iomanip>
using namespace std;

//       1 
//     2 3
//   4 5 6
// 7 8 9 10

int main()

{
	int num=1;
	for(int i=1; i<=4; i++) //4 rows han mere pas 
    {  
		for(int j=3; j>=i; j--)  //star ya space 10 se print karke kam karte jao
        {
			cout <<"  ";
		}
		for(int k=1; k<=i; k++) // 10 rows print kardo
        {
			cout <<num<<" ";
			num++;
		}

		cout << endl;
	}
}
