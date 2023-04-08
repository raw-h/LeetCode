#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1, mid;
    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid + 1])
            start = mid + 1;
        else
            end = mid;
    }
    return start;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int answer = peakIndexInMountainArray(arr);
    cout << answer << endl;
    return 0;
}