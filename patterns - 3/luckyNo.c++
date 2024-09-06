#include<iostream>
using namespace std;

void luckyNo(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        bool lucky = true;
        int num = i;
        while (num != 0) {
            int rem = num % 10;
            if (!(rem == 4 || rem == 7)) {
                lucky = false;
                break;
            }
            num = num / 10;
        }
        if(lucky) {
            cout << i << " ";
        }
    }
    if (count == -1) {
        cout << count;
    }
}

int main() {
    int a,b;
    cin >> a >> b;
    luckyNo(a,b);
    return 0;
}