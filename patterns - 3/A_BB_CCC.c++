/*
        Question

    A
    BB
    CCC
    DDDD
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i =1;
    while (i<=n) {
        int j = 1;
        while ( j <= i) {
            char c = 'A' + i - 1;
            cout << c;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}