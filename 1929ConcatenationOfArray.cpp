#include <bits/stdc++.h>
using namespace std;

vector<int> getConcatenation(vector<int> &nums)
{
    int n = nums.size();
    for(int i = 0; i < n; i++){
        nums.push_back(nums[i]);
    }
    return nums;
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
    vector<int> answer = getConcatenation(nums);
    for (auto it : answer)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}