/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> & nums, int target){
    int count = 0;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        int first = nums[i];
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (first + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}
int main(){
    int n, target;
    cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cin >> target;

    vector<int> ans = twoSum(nums, target);
    for(auto pt: ans){
        cout << pt;
    }
    return 0;
}