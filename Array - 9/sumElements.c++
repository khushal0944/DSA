#include<iostream>
using namespace std;

int getSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i<size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[100];
    int size;
    cout << "Enter Size :";
    cin >> size;
    for (int i = 0; i<size; i++) {
        cout << "Enter Element " << i+1 << " : ";
        cin >> arr[i];
    }
    cout << "SUM IS :- " << getSum(arr, size) << endl;
    return 0;
}