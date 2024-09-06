/*
        Question

    C
    BC
    ABC
*/

#include <iostream>
using namespace std;

int main () {
    int n,i = 1;
    cin >> n;
    while (i <= n) {
            char c = 'A' + n - i;
        int j = 1;
        while (j <= i) {
            cout << c;
            c++;
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}