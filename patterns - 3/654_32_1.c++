/*
        Question

    6 5 4
    3 2
    1
*/

#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int i = n;
    int startNo = (n * (n + 1))/2;
    while (i >= 1){
        int j = 1;
        while (j <= i) {
            cout << startNo << " ";
            startNo--;
            j++;
        }
        i--;
        cout << endl;
    }
    return 0;
}