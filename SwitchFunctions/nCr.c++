#include <iostream>
using namespace std;

int factorial(int n) {
    if(n == 1 || n == 0) return 1;
    return n*factorial(n-1);
}

int nCr(int n, int r) {
    if ( n < 0 || r < 0 || n-r < 0) return 0;
    int denominator = factorial(r) * factorial(n-r);
    if (denominator < 0) return 0;
    return (factorial(n)/denominator);
}


int main() {
    int n,r;
    cin >> n >> r;
    cout << "n " << n << endl;
    cout << "r " << r << endl;
    cout << "Answer " << nCr(n,r);
    return 0;
}