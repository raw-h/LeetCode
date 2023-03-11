/*
Given an array of positive integers nums and a positive integer target, return the minimal length of a
subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.
*/
#include<bits/stdc++.h>
using namespace std;
int minSubArrayLen(int target, vector<int> &nums)
{
    int sum = 0;
    int min_sum = INT_MAX;
    int l = 0, j = 0;
    while (j < nums.size())
    {
        sum += nums[j];
        if (sum >= target)
        {
            while (sum >= target)
            {
                sum -= nums[l];
                l++;
            }
            min_sum = min(min_sum, (j - l + 2));
        }
        j++;
    }
    if (min_sum == INT_MAX)
        return 0;
    else
        return min_sum;
}
int main()
{
    int n;
    cin >> n;
    vector <int> nums;
    for(int i = 0;i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int p; cin >> p;
    int answer = minSubArrayLen(p, nums);
    cout << answer << endl;
    return 0;
}