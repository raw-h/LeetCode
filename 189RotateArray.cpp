#include <bits/stdc++.h>
using namespace std;

// Approach 1
void rotate(vector<int> &nums, int k)
{
    vector<int> temp(nums.size());
    for(int i = 0; i < nums.size(); i++){
        temp[(i + k) % nums.size()] = nums[i];
    }
    nums = temp;
}


/* Approach 2
void rotateByOne(vector<int> &nums)
{
    int n = nums.size(), temp = nums[n - 1];
    for (int i = n - 1; i > 0; i--)
        nums[i] = nums[i - 1];
    nums[0] = temp;
    cout << "Temp = " << temp << endl;
    for(int i = 0; i < n; i++)
        cout << nums[i] << " ";
    cout << endl;
}
void rotate(vector<int> &nums, int k)
{
    for (int i = 0; i < k; i++)
        rotateByOne(nums);
}
*/

/* Approach 3
void rotate(vector<int> &nums, int k)
{
    k = k % nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}
*/

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
    cin >> k;
    rotate(nums, k);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << nums[i] << " ";
    // }
    // cout << endl;
    return 0;
}