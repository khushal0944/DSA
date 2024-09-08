#include <iostream>
using namespace std;

int complementNumber(int number) {
    if (number == 0) return 1;
    int place = 1, answer = 0;
    while (number != 0)
    {
        int bit = (number & 1) ? 0 : 1;
        answer += (bit * place);
        place *= 2;
        number = number >> 1;
    }
    return answer;
}

int main() {
    int number;
    cin >> number;
    cout << complementNumber(number);
    return 0;
}