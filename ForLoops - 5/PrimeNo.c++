#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i < n; i++) {
        if (n%i == 0) {
            isPrime = false;
            break;
        } 
    }
    if(isPrime) {
        cout << "Prime No";
    } else if(!isPrime) {
        cout << "Not a Prime No";
    }
    return 0;
}