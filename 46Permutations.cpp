#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, int index, vector<vector<int>> &output)
{
    if (index >= nums.size())
    {
        output.push_back(nums);
        return;
    }

    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[index], nums[j]);
        solve(nums, index + 1, output);
        swap(nums[index], nums[j]);
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> output;
    int index = 0;
    solve(nums, index, output);
    return output;
}

int main(){
    vector<int>nums;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    vector<vector<int>> answer = permute(nums);

    for(int i = 0; i < answer.size(); i++){
        for(int j = 0; j < answer[i].size(); j++){
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}