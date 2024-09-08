#include<iostream>
using namespace std;

int subtractProductAndSum(int n) {
    int sum = 0, product = 1;
    while(n != 0) {
        int rem = n % 10;
        sum += rem;
        product *= rem;
        n = n / 10;
    }
    return product - sum;
}

int main() {
    cout << subtractProductAndSum(15);
    return 0;
}