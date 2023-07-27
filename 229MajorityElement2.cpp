#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    vector<int> answer;
    map<int, int> freq;
    for (int i = 0; i < nums.size(); i++)
        freq[nums[i]]++;
    int el_count = nums.size() / 3;
    for (auto it : freq)
    {
        if (it.second > el_count)
            answer.push_back(it.first);
    }
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
    vector<int> answer = majorityElement(nums);

    for(int i = 0; i < answer.size(); i++){
        cout << answer[i] << " ";
    }
    cout << endl;
    return 0;
}