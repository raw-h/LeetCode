/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*/
#include<bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int> &nums)
{
    bool ans = false;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            ans = true;
            break;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    bool answer = containsDuplicate(nums);
    cout << answer << endl;
    return 0;
}