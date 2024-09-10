#include<iostream>
using namespace std;

int main() {
    int arr1[5] = {1,2,3,4,5};           // Creating Array with values
    int arr2[10];                        // Creating Array with Garbage Values
    int arr3[15] = {0};                  // Creating Array with All addresses with 0
    int arr4[15] = {1};                  // Creating Array with All addresses with 0 except 1 address with value 1

    // We can initialize the array with any value by using the fill_n command 
    int arr5[100];
    fill_n(arr5, 100, 5);               // fill array with 5 
    int arr6[100];
    fill_n(arr6, 90, 1);                // Initialize first 90 addresses of array with 1 and other with garbage values
    for (int i = 0; i<100; i++) {
        cout << arr5[i] << " ";
    }
    return 0;
}