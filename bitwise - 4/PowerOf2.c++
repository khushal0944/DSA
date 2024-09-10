#include<iostream>
using namespace std;

bool checkSetBit(int num) {
    int count = 0;
    while (num != 0) {
        int bit = num&1;
        if (bit == 1) {
            count++;
        }
        num = num >> 1;
    }
    if (count == 1) {
        return true;
    }
    return false;
}

int main () {
    int num;
    cin >> num;
    cout << checkSetBit(num);
    return 0;
}