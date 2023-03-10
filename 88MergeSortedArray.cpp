/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.
The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
*/
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    for(int i = 0; i < n; i++){
        nums1[i + m] = nums2[i];
    }
    sort(nums1.begin(), nums1.end());
    for(auto pt: nums1){
        cout << pt << " ";
    }
    cout << endl;
}
int main(){
    int m, n;
    cin >> m >> n;
    vector<int> nums1; 
    vector<int> nums2;
    for(int i = 0; i < m + n; i++){
        int x;
        cin >> x;
        nums1.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums2.push_back(x);
    }
    merge(nums1, m, nums2, n);
    return 0;
}