#include<bits/stdc++.h>
using namespace std;
vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> answer;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int i = 0, j = 0;
    while(i < nums1.size() && j < nums2.size()){
        if(nums1[i] == nums2[j]){
            answer.push_back(nums1[i]);
            i++, j++;
        }
        else if (nums1[i] < nums2[j])
            i++;
        else
            j++;
    }
   return answer;
}
int main(){
    int n, m;
    cin >> n >> m;
    vector<int>nums1;
    vector<int>nums2;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums1.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        nums2.push_back(x);
    }
    vector<int> ans = intersect(nums1, nums2);
    for (auto it: ans)
    {
        cout << it << endl;
    }
    return 0;
}