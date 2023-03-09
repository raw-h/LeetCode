/*
Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.
Return the kth positive integer that is missing from this array.
*/
#include <bits/stdc++.h>
using namespace std;
int findKthMissingInt(vector<int> &arr, int k)
{
    int i = 0, j = 1;
    while (i < arr.size())
    {
        if (arr[i] != j)
            k--;
        else
            i++;
        if (k == 0)
            return j;
        j++;
    }
    return j + k - 1;
}

;
int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int k;
    cin >> k;
    int ans = findKthMissingInt(arr, k);
    cout << ans << endl;
    return 0;
}
