#include<iostream>
using namespace std;

int main()
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 7 8 9 10
// 4 5 6
// 2 3
// 1

{
    int num = 1;

    // Upper half
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    // Set num for lower half
    num = 7;

    // Lower half
    for (int i = 4; i >= 1; i--) {
        int temp = num;
        for (int j = 1; j <= i; j++) {
            cout << temp << " ";
            temp++;
        }
        num -= i - 1;
        cout << endl;
    }

    return 0;
}

  