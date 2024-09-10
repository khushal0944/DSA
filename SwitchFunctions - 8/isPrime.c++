#include<iostream>
using namespace std;

bool isPrime(int number) {
    for (int i = 2; i<number;i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cin >> num;
    switch (isPrime(num))
    {
    case 0:
        cout << "Not Prime No.";
        break;
    case 1:
        cout << "Prime No.";
        break;
    }
    return 0;
}