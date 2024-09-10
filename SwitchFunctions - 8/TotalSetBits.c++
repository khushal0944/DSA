#include<iostream>
using namespace std;

int findSetBits(int num) {
    int count = 0;
    while (num != 0) {
        int bit = num&1;
        if (bit) count++;
        num = num >> 1;
    }
    return count;
}

int totalSetBits(int a, int b) {
    return findSetBits(a) + findSetBits(b);
}

int main() {
    int a,b;
    cin >> a >> b;
    cout << totalSetBits(a, b);
    return 0;
}