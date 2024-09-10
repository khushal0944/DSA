#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size, int item) {
    for (int i=0;i<size; i++) {
        if (arr[i] == item) {
            return true;
        }
    }
    return false;
}

int main () {
    int item;
    cin >> item;
    int arr[5] = {1,2,8,3,9}; 
    int found = linearSearch(arr,5, item);
    if (found) {
        cout << "Item Found";
    } else {
        cout << "Item Not Found";
    }
    return 0;
}