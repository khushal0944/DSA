#include<iostream>
#include<vector>
using namespace std;

int peakMountain(vector<int>& arr) {
    int s = 0,e = arr.size() - 1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
            return mid;
        }
        else if (arr[mid] < arr[mid + 1]) {
            s = mid + 1;
        }
        else if (arr[mid] < arr[mid - 1])
        {
            e = mid - 1;
        }
    }
}

int main () {
    vector<int> arr = {0,10,5,0};
    int peak = peakMountain(arr);
    cout << "Peak Element is " << arr[peak] << endl;
}