#include<bits/stdc++.h>
using namespace std;
vector<int> decompressRLElist(vector<int> &nums)
{
    vector<int> list;
    int data;
    int times;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i % 2 == 0)
            times = nums[i];
        else
        {
            data = nums[i];
            while (times)
            {
                list.push_back(nums[i]);
                times--;
            }
        }
    }
    return list;
}

int main(){
    return 0;
}