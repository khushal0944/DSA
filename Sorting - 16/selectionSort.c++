#include <bits/stdc++.h>

using namespace std;

int findMin(vector<int> arr, int index)
{

    int minEle = index;

    for (int i = index + 1; i < arr.size(); i++)
    {
        if (arr[minEle] > arr[i])
            minEle = i;
    }

    return minEle;
}

void selectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int minVal = findMin(arr, i);
        swap(arr[i], arr[minVal]);
    }
}

int main()
{
    vector<int> arr = {10, 20, 20, 10};
    selectionSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}