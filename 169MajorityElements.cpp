#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    map<int, int> freq;
    for (int i = 0; i < nums.size(); i++)
    {
        freq[nums[i]]++;
    }
    int maxi = INT_MIN;
    for (auto it : freq)
    {
        maxi = max(maxi, it.second);
    }
    for (auto it : freq)
    {
        if (it.second == maxi)
            return it.first;
    }
    return 0;
}
/*
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start)/2;

        return nums[mid];
    }
*/

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
    int answer = majorityElement(nums);
    cout << answer << endl;
    return 0;
}