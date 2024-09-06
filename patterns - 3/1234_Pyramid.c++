#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = n - i;
        while (j >= 1) {
            cout << " ";
            j--;
        }
        int k = 1;
        while (k <= i) {
            cout << k;
            k++;
        }
        int l = i - 1;
        while (l >= 1) {
            cout << l;
            l--;
        }
        i++;
        cout << endl;
    }
    return 0;
}