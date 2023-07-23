#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &arr, int s, int e, int k)
{
    int start = s;
    int end = e;
    int mid;
    while (start <= end)
    {
        mid = start + ((end - start) / 2);
        if (arr[mid] == k)
            return mid;
        else if (arr[mid] > k)
            end = mid - 1;
        else if (arr[mid] < k)
            start = mid + 1;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int target;
    cin >> target;

    int start = 0;
    int end = nums.size() - 1;
    int mid;
    while (start < end)
    {
        mid = start + ((end - start) / 2);
        if (nums[mid] >= nums[0])
            start = mid + 1;
        else
            end = mid;
    }
    int pivot = end;
    
    
    start = 0;
    end = nums.size() - 1;

    if (nums.size() == 0)
        return -1;
    if (nums.size() == 1)
    {
        if (nums[0] == target)
            return 0;
        else
            return -1;
    }
    
    int ans;
    if (target >= nums[0] && target <= nums[pivot - 1])
        ans = binary_search(nums, 0, pivot - 1, target);
    else if(target >= nums[pivot] && target <= nums[end])
        ans = binary_search(nums, pivot, end, target);
    else
        ans = -1;
    cout << ans;
    return 0;
}