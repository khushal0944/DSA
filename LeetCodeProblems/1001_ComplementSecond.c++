#include <iostream>
using namespace std;

int complementNumber(int number) {
    int m = number;
    int mask = 0;
    if (number == 0) return 1;
    while (m != 0) {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    return ((~number) & mask);
}

int main() {
    int number;
    cin >> number;
    cout << complementNumber(number);
    return 0;
}