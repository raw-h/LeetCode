#include<bits/stdc++.h>
using namespace std;
int ans = -1;

bool binSearch(vector<int> &nums, int start, int end, int target)
{
    if (start > end)
        return false;
    int mid = start + (end - start) / 2;
    if (nums[mid] == target)
    {
        ans = mid;
        return true;
    }
    else if (nums[mid] > target)
        return binSearch(nums, start, mid - 1, target);
    else if (nums[mid] < target)
        return binSearch(nums, mid + 1, end, target);
    return true;
}

int search(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    bool answer = binSearch(nums, start, end, target);
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int>arr;
    arr.reserve(n);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int key;
    cin >> key;

    int index = search(arr, key);
    cout << index << endl;
    return 0;
}