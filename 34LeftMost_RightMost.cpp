#include<bits/stdc++.h>
using namespace std;

int left(vector<int> &arr, int k)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid;
    int ans = -1;
    while (start <= end)
    {
        mid = start + ((end - start) / 2);
        if (arr[mid] == k)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > k)
            end = mid - 1;
        else if (arr[mid] < k)
            start = mid + 1;
    }
    return ans;
}

int right(vector<int> &arr, int k)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid;
    int ans = -1;
    while (start <= end)
    {
        mid = start + ((end - start) / 2);
        if (arr[mid] == k)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > k)
            end = mid - 1;
        else if (arr[mid] < k)
            start = mid + 1;
    }
    return ans;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> ans;
    ans.push_back(left(nums, target));
    ans.push_back(right(nums, target));
    return ans;
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
    int target;
    cin >> target;

    vector<int> answer;
    answer = searchRange(nums, target);
    for(auto p: answer)
        cout << p << " ";
    cout << endl;
    return 0;
}