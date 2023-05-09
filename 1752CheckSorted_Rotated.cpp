#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)
{
    int count = 0;
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
            count++;
    }
    if (nums[n - 1] > nums[0])
        count++;
    return count <= 1;
}

int main()
{
    int n, k;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    bool ans = check(nums);
    cout << ans << endl;
    return 0;
}