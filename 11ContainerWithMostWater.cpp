#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{
    int n = height.size();
    int left = 0;
    int right = n - 1;

    int maximumArea = INT_MIN;

    while (left <= right)
    {
        cout << "Left = " << left << " & Right = " << right << " Height[" << left << "] = " << height[left] << " & Height[" << right << "] = " << height[right] << endl;
        int currArea = (min(height[left], height[right])) * (right - left);
        maximumArea = max(maximumArea, currArea);

        if (height[left] <= height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return maximumArea;
}

int main(){
    int n;
    cin >> n;
    vector<int> height;
    height.reserve(n);

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        height.push_back(x);
    }

    int answer = maxArea(height);
    cout << answer << endl;
    return 0;
}