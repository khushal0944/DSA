#include <iostream>
#include <math.h>
using namespace std;


bool isPowerOfTwo(int n) {
    int i = 0;
    while (i <= 30) {
        int result = pow(2,i);
        if(result == n) {
            return true;
        }
        i++;
    }
    return false;
}

int main() {
    int number;
    cin >> number;
    cout << isPowerOfTwo(number);
    return 0;
}