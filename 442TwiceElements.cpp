#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    map<int, int> freq_map;
    for(auto it: nums){
        freq_map[it]++;
    }
    vector<int> answer;
    for(auto it: freq_map){
        if(it.second == 2) 
            answer.push_back(it.first);
    }
    return answer;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    vector<int> final_vec =  findDuplicates(arr);
    for(auto it: final_vec){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}