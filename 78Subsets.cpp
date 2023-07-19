#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums, vector<int> output, vector<vector<int>> &answer, int index)
{
    if (index >= nums.size())
    {
        answer.push_back(output);
        return;
    }

    solve(nums, output, answer, index + 1);

    int element = nums[index];
    output.push_back(element);
    solve(nums, output, answer, index + 1);
}
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> answer;
    vector<int> output;
    int index = 0;
    solve(nums, output, answer, index);
    return answer;
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
    vector<vector<int>> answer = subsets(nums);
    for(int i = 0; i < answer.size(); i++){
        for(int j = 0; j < answer[i].size(); j++){
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}