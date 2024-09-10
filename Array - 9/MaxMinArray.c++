#include<iostream>
using namespace std;

int getMax(int arr[], int size) {
    int max = INT32_MIN;
    for (int i= 0; i<size;i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int size) {
    int min = INT32_MAX;
    for (int i= 0; i<size;i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
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
    cout << "MAX ELEMENT IS :- " << getMax(arr, size) << endl;
    cout << "MIN ELEMENT IS :- " << getMin(arr, size) << endl;
    return 0;
}