/*
        Question

    ABCD
    BCDE
    CDEF
    DEFG
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i =1;
    char c = 'A';
    while(i <= n) {
        int j = 1;
        while (j <= n) {
            char a = 'A' + i + j - 2;
            cout << a;
            j++;
        }
        c++;
        cout << endl;
        i++;
    }
    return 0;
}