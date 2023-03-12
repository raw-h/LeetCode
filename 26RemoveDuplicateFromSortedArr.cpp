#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>&nums){
    int count = 0;
    int i = 0;
    int j = i + 1;
    while(j < nums.size()){
        if(nums[j] == nums[i]){
            j++;
            count++;
        }
        else{
            nums[j - count] = nums[j];
            i = j;
            j++;
        }
    }
    return (nums.size() - count);
}
int main(){
    int n ;
    cin >> n;
    vector<int>nums;
    for(int i = 0; i < n; i++){
        int x; 
        cin >> x;
        nums.push_back(x);
    }
    int answer = removeDuplicates(nums);
    cout << "Answer: "<< answer << endl;
    return 0;
}