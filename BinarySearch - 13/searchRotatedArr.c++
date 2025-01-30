#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr,int s,int e,int target) {
    while (s <= e) {
        int mid = s + (e-s) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) s = mid + 1;
        else e = mid - 1;
    }
    return -1;
}

int searchRotated(vector<int> &nums, int target)
{
    // To Find Pivot Element
    int s = 0, e = nums.size() - 1;
    while (s < e) {
        int mid = s + (e - s) / 2;
        if (nums[mid] >= nums[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    if (nums[s] <= target && target <= nums[nums.size()-1]) {
        return binarySearch(nums,s,nums.size()-1,target);
    } else {
        return binarySearch(nums, 0, s - 1, target);
    }
}

int main()
{
    vector<int> arr = {7,8,9,1,4,5};
    int target = 5;
    cout << "Position of Element is " << searchRotated(arr, target) << endl;
}