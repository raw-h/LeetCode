#include <bits/stdc++.h>
using namespace std;
vector<int> buildArray(vector<int> &nums)
{
    vector<int> ans;
    for(int i = 0; i < nums.size(); i++){
        ans.push_back(nums[nums[i]]);
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
    vector< int> answer = buildArray(nums);
    for(auto it: answer){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}