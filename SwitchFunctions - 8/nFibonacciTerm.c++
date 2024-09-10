#include<iostream>
using namespace std;

int nthFibonacciTerm(int num) {
    int a = 0,b = 1;
    for (int i = 3; i <= num; i++)
    {
        int temp = a;
        a = b;
        b = temp + b;
        // cout << i << " " << b << endl;
    }
    return b;
}
int main() {
    int n;
    cin >> n;
    cout << nthFibonacciTerm(n);
    return 0;
}