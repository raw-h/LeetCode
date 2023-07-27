#include <bits/stdc++.h>
using namespace std;

static bool cmp(pair<int, int> &a, pair<int, int> &b){
    return a.second > b.second;
}
vector<int> topKFrequent(vector<int> &nums, int k)
{
    vector<int> answer;
    sort(nums.begin(), nums.end());
    map<int, int> freq;
    for (int i = 0; i < nums.size(); i++)
        freq[nums[i]]++;

    vector<pair<int,int>> freq2;
    for(auto it: freq)
        freq2.push_back(it);

    sort(freq2.begin(), freq2.end(), cmp);

    for(int i = 0; i < k; i++){
        answer.push_back(freq2[i].first);
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
    int k;
    cin >> k;
    vector<int> answer = topKFrequent(nums, k);
    cout << "Printing the answer :- " << endl;
    for(auto it : answer)
        cout << it << endl;
    return 0;
}