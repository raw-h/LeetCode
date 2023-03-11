#include <bits/stdc++.h>
using namespace std;
int longestOnes(vector<int> &nums, int k)
{
    if (k >= nums.size())
        return nums.size();
    int count = 0;
    int ones = 0;
    int i = 0;
    int max_ones = INT_MIN;
    int l = 0;
    int r = 0;
    while (r < nums.size())
    {
        ones += nums[i];
        r++;
        if (nums[i] == 0)
            count++;
        if (count > k)
        {
            ones -= nums[l];
            if (nums[l] == 0)
                count--;
            l++;
        }
        max_ones = max(max_ones, ones);
        i++;
    }
    if ((max_ones + k) >= nums.size())
        return nums.size();
    return max_ones + k;
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
    int k;
    cin >> k;
    int answer = longestOnes(nums, k);
    cout << answer << endl;
    return 0;
}