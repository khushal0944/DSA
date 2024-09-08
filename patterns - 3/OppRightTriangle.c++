/*
        Question
    *****
     ****
      ***
       **
        *
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = i - 1;
        while (j >= 1) {
            cout << " ";
            j--;
        }
        int k = n - i + 1;
        while (k >= 1) {
            cout << "*";
            k--;
        }
        cout << endl;
        i++;
    }
    return 0;
}