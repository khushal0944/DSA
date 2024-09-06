#include<iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int c = ~a;
    cout << c;
    return 0;
}

/*
            Examples
    -> 17 = 000000000010001
      ~17 = 111111111101110     (Binary No.)
                                    (2's complement to find ~ in Decimal No.)
                                    (1st bit is 1 so answer is negative)
            1's complement => 000000000010001
            2's complement => 000000000010010
      ~17 = -18                 (Decimal No.)

    -> 15 = 00000000001111
      ~15 = 11111111110000
            1's complement => 00000000001111
            2's complement => 00000000010000
      ~15 = -16

    -> ~16 = -17
*/

/*
            NOT Table
    x   y
    1   0
    0   1
*/