#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int number;
    while (1)
    {
    cin >> number;
    switch (number)
    {
    case 1:
        cout<< "1";
        break;
    case 2:
        cout<< "2";
        break;
    case 3:
        cout<< "3";
        break;
    case 4:
        cout<< "4";
        break;
    case 5:
        cout<< "5";
        break;
    default:
        cout << "Default";
        exit(1);
    }
    }
    return 0;
}