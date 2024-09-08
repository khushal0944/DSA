#include<iostream>
using namespace std;

int evalNeg(int n) {
    int i = 0, place_val = 1;
    long long final_ans = 0;
    while (i <= 31) {
        int bit = (n>>i)&1;
        if (i == 0 && bit == 1) {
            bit = 0;
        }
        cout << bit;
        final_ans += (bit * place_val);
        place_val *= 10;
        i++;
    }
    cout << "final_ans " << final_ans;
    return 0;
}

int main() {
    int num;
    cin >> num;
    // if(num >= 0) {
    //     cout << "Enter A Negative No.";
    // } else {
        evalNeg(num);
    // }
    return 0;
}