#include<bits/stdc++.h>
using namespace std;
bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    map<int, int> repeat;
    for (int i = 0; i < nums.size(); i++)
    {
        if(repeat.find(nums[i]) != repeat.end()){
            if((i - repeat[nums[i]]) <= k)
                return true;

        }
        repeat[nums[i]] = i;
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    vector<int>nums;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int k;
    cin >> k;
    bool answer = containsNearbyDuplicate(nums, k);
    cout << answer << endl;
    return 0;
}