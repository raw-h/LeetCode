#include<bits/stdc++.h>
using namespace std;

int mostFrequentEven(vector<int> &nums)
{
    int answer = -1;
    map<int, int> freq;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] % 2 == 0)
            freq[nums[i]]++;
    }
    int maxi = INT_MIN;
    for (auto it : freq)
    {
        maxi = max(maxi, it.second);
    }
    for (auto it : freq)
    {
        if (it.second == maxi)
        {
            answer = it.first;
            break;
        }
    }
    return answer;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int answer = mostFrequentEven(nums);
    cout << answer << endl;
    return 0;
}