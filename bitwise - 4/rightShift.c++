#include<iostream>
using namespace std;

int main() {
            // Right Shift
    int number;
    cin >> number;
    int shift;
    cin >> shift;
    cout << (number>>shift);
    return 0;
}

/*
            Examples
    -> 17>>2 = 000000000010001
       17>>2 = 000000001000100 => 68    (Add 2 (0) digits at end)

    -> 15>>1 = 00000000001111
       15>>1 = 00000000000111 => 7    (Add 1 (0) digits at end)

            Shortcut To Find
    -> 16>>2 = 16/2*2 = 4
        * if shift is 1 then divide (2) with 1 times
        * if shift is 2 then divide (2) with 2 times
        * if shift is 3 then divide (2) with 3 times
    
    -> 19>>5 = 19/2*2*2*2*2 = 0
            19/2 = 9.5 = 9 (only int values)
            9/2 = 4.5 = 4
            4/2 = 2
            2/2 = 1
            1/2 = 0.5 = 0

            Answer is = 0
*/