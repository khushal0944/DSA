#include<iostream>
using namespace std;

int main() {
            // Left Shift
    int number;
    cin >> number;
    int shift;
    cin >> shift;
    cout << (number<<shift);
    return 0;
}

/*
            Examples
    -> 17<<2 = 000000000010001
       17<<2 = 000000001000100 => 68

    -> 15<<1 = 00000000001111
       15<<1 = 00000000011110 => 30

            Shortcut To Find
    -> 16<<2 = 16*2*2 = 64
        * if shift is 1 then multiply (2) with 1 times
        * if shift is 2 then multiply (2) with 2 times
        * if shift is 3 then multiply (2) with 3 times
    
    -> 19<<5 = 19*2*2*2*2*2 = 608
*/