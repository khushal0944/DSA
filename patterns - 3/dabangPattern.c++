/*
        Question

    1 2 3 4 4 3 2 1 
    1 2 3 * * 3 2 1 
    1 2 * * * * 2 1 
    1 * * * * * * 1 
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n - i + 1) {
            cout << j << " ";
            j++;
        }
        int k = i-1;
        while (k >= 1) {
            cout << "*" << " ";
            k--;
        }
        int l = i - 1;
        while (l >= 1) {
            cout << "*" << " ";
            l--;
        }
        int m = n - i + 1;
        while (m >= 1) {
            cout << m << " ";
            m--;
        }
        cout << endl;
        i++;
    }
}

