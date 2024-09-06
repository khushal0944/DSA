/*
        Question

    A
    BC
    DEF
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    char c = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << c;
            c++;
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}