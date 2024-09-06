#include<iostream>
using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int sum = 0;
//     for(int i=0;i<=n;i++) {
//         sum += i;
//     }
//     cout << sum << endl;
//     return 0;
// }

int main() {
    int n;
    cin >> n;
    int sum = n*(n+1)/2;
    cout << sum << endl;
    return 0;
}