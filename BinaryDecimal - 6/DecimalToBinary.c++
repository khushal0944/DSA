            // DECIMAL -> BINARY
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int placeVal = 1;
    int i = 0, answer = 0;
    while (n != 0) {
        int bit = n & 1;
        answer = (bit * placeVal) + answer;
        placeVal *= 10;
        n = n>>1;
        i++;
    }
    cout << "Answer is :- " << answer;
    return 0;
}

// Avoid using pow(10, i) for integer operations. Instead, directly multiply by powers of 10 using integer math.