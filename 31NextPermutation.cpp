#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int i = 0;
    int j = 0;
    for (int k = 0; k < (nums.size() - 1); k++)
    {
        if (nums[k] < nums[k + 1])
        {
            i = k;
            j = k + 1;
        }
    }
    // cout << "First loop executed" << endl;
    if (i == j)
    {
        sort(nums.begin(), nums.end());
        return;
    }
    else
    {
        int mini = INT_MAX;
        int x = -1;

        if (i == nums.size() - 2)
        {
            swap(nums[i], nums[i + 1]);
            return;
        }
        else
        {
            // cout << "Entered else block" << endl;
            for (int k = j; k < nums.size(); k++)
            {
                if (nums[k] > nums[i])
                {
                    mini = min(nums[k], mini);
                    x = k;
                }
            }
        }
        // cout << "Value of x = " << x << " and i = " << i << endl;
        swap(nums[i], nums[x]);
        sort(nums.begin() + (i + 1), nums.end());
        return;
        // 7 4 3 2 5 4 3 1
    }
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
    nextPermutation(nums);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}