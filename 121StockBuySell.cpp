#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices)
{
    int min_Stock = INT_MAX;
    int max_profit = INT_MIN;
    int i = 0;
    while(i < prices.size()){
        min_Stock = min(min_Stock, prices[i]);
        if(prices[i] >= min_Stock){
            max_profit = max(max_profit, prices[i] - min_Stock);
        }
        i++;
    }
    return max_profit;
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
    int answer = maxProfit(nums);
    cout << answer;
    return 0;
}