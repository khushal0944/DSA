#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> &arr)
{
    int s = 0, e = arr.size() - 1;
    while (s < e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[e])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int main()
{
    vector<int> arr = {3,7,8,10,11,15,1,2};
    int pivot = findPivot(arr);
    cout << "Pivot Element is " << arr[pivot] << endl;
}