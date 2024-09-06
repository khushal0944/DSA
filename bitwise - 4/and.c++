#include<iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int c = a&b;
    cout << c;
    return 0;
}

/*
            Examples
    -> 17, 7 => 17 = 10001              (1&0 = 0 || 0&0 = 0 || 0&1 = 0 || 0&1 = 0 || 1&1 = 1) => (00001)
                7 = 00111               (First Value is of 17 & Second Value is of 7)
                17 & 7= 00001 => 1 
    -> 15, 8 => 15 = 1111
                8 = 1000
                15 & 8 = 1000 => 8
    -> 16, 20 => 16 = 10000
                20 = 10100
                16 & 20 = 10000 => 16
*/

/*
            AND Table
    x   y   z
    0   0   0
    0   1   0
    1   0   0
    1   1   1
*/