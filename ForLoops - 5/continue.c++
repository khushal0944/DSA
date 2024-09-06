#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i < n; i++) {
        cout << "Hello" << endl;
        cout << "Before Continue" << endl;
        continue;
        cout << "After Continue" << endl;
    }
    return 0;
}

/*
    Answers of 5 Questions At 49:28
Ans 1 -> 0 2 4 
Ans 2 -> 0 0 0 0 0... (Infinte Times)
Ans 3 -> 0 3 5 7 9 11 13 15
Ans 4 & Ans 5 -> 0 0           (Ans of Q4 & Q5 is Same)
         0 1
         0 2
         0 3
         0 4
         0 5
         1 0
         1 1
         1 2
         1 3
         1 4
         1 5
         2 0
         2 1
         2 2
         2 3
         2 4
         2 5
         3 0
         3 1
         3 2
         3 3
         3 4
         3 5
         4 0
         4 1
         4 2
         4 3
         4 4
         4 5
*/