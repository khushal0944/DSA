#include<iostream>
using namespace std;

int hammingWeight(int n) {
    int count = 0;
    while (n != 0) {
        if (n&1) {
            count++;
        }
        n = n>>1;
    }
    cout << count;
}

int main() {
    hammingWeight(15);
    return 0;
}