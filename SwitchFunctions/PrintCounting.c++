#include <iostream>
using namespace std;

void printCount(int n) {
    for(int i = 1; i<=n;i++){
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    printCount(n);
    return 0;
}