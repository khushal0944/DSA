#include<iostream>
using namespace std;

void binarySearch(int arr[],int size,int item) {
    int first = 0;
    int last = size-1;
    for (int i= 0; i<size; i++) {
        int mid = (first + last)/2;
        if (arr[mid] == item) {
            cout << "Item Found";
            return;
        } else if (arr[mid] > item) {
            first = mid + 1;
        } else if (arr[mid] < item) {
            last = mid - 1;
        }
    }
    cout << "Item Not Found";
}

int main () {
    int size = 5;
    int arr[5] = {1,2,3,4,5};
    int item = 4;
    binarySearch(arr,size, item);
    return 0;
}