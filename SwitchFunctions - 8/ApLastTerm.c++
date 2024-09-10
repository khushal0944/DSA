#include<iostream>
using namespace std;

int lastTermAP(int);

int main() {
    int n;
    cout << "Enter No. of Terms: ";
    cin >> n;
    cout << lastTermAP(n);
    return 0;
}

int lastTermAP(int n) {
    int a,d;
    cout << "Enter First Term and Common Difference: ";
    cin >> a >> d;
    return (a + (n-1) * d);
}