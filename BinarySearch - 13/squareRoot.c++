#include<iostream>
#include<vector>

using namespace std;

int findSquareRoot (int x) {
    int s = 0, e = x;
    int ans = 0;
    if (x < 0) return -1;
    while (s <= e) {
        int mid = s + (e-s)/2;
        long long int square = mid * mid;
        if (square > x) {
            e = mid - 1;
        } else if (square == x) {
            ans = mid;
            break;
        } else {
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}

double morePrecision(int num, int precisionDigits, int sol)
{
    double factor = 1;
    double ans = sol;
    for (int i = 0; i< precisionDigits; i++) {
        factor /= 10;
        for (double j = ans; j*j < num; j += factor) {
            ans = j;
        }
        cout << ans << endl;
    }
    return ans;
}

int main()
{
    int num = 238;
    cout << "Square Root of " << num << " is: " << morePrecision(num, 3, findSquareRoot(num));
    return 0;
}