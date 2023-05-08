#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int size = nums.size();
    int nonZero = 0;
    for(int j = 0; j < size; j++){
        if(nums[j] != 0){
            swap(nums[j], nums[nonZero]);
            nonZero++;
        }
    }
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
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
    moveZeroes(arr);
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
    return 0;
}