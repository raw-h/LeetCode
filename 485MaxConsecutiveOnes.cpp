#include<bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int> &nums)
{
    int sum = 0;
    int max_sum = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
            sum = 0;
        sum += nums[i];
        max_sum = max(sum, max_sum);
    }
    return max_sum;
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
    int answer = findMaxConsecutiveOnes(nums);
    cout << answer << endl;
    return 0;
}