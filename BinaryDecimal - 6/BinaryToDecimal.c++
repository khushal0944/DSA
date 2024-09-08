#include<iostream>
using namespace std;

int main() {
    int binary, answer = 0, binaryMul = 1;
    cin >> binary;
    while (binary != 0) {
        int lastBit = binary % 10;
        if (lastBit != 0 || lastBit != 1) {
            break;
        } 
        answer += (lastBit * binaryMul);
        binaryMul *= 2;
        binary /= 10;
    }
    cout << answer;
    return 0;
}