/*
Given an integer array nums, find the subarray with the largest sum, and return its sum.
*/
#include<bits/stdc++.h>
using namespace std;
int maxSubarray(vector<int>&nums){
    int sum = 0;
    int max_sum = nums[0];
    for(auto pt: nums){
        sum += pt;
        max_sum = max(max_sum, sum);
        if(sum < 0)
            sum = 0;
    }
    return max_sum;
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
    int answer = maxSubarray(nums);
    cout << answer;
    return 0;
}