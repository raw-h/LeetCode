#include <bits/stdc++.h>
using namespace std;

int differenceOfSum(vector<int> &nums)
{
    int n = nums.size();
    int temp = 0;
    int temp1 = 0;
    for (int i = 0; i < n; i++)
    {
        temp += nums[i];
        while (nums[i] > 0)
        {
            temp1 += nums[i] % 10;
            nums[i] /= 10;
        }
    }
    return abs(temp - temp1);
}

int main()
{
    int n;
    cin >> n;
    vector<int> numbers;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        numbers.push_back(x);
    }
    int ans = differenceOfSum(numbers);
    cout << ans << endl;
    return 0;
}