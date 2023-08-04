#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmallerEl(vector<int> &arr, int n)
{
    vector<int> ans(n);
    stack<int> st;
    st.push(-1);
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (st.top() != -1 && arr[st.top()] >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

vector<int> prevSmallerEl(vector<int> &arr, int n)
{
    vector<int> ans(n);
    stack<int> st;
    st.push(-1);
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        while (st.top() != -1 && arr[st.top()] >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

int largestRectangleArea(vector<int> &heights)
{
    int n = heights.size();

    vector<int> next;
    next = nextSmallerEl(heights, n);

    vector<int> prev;
    prev = prevSmallerEl(heights, n);
    int area = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int newArea;
        int length = heights[i];
        if (next[i] == -1)
        {
            next[i] = n;
        }
        int breadth = next[i] - prev[i] - 1;
        newArea = length * breadth;
        area = max(area, newArea);
    }
    return area;
}

int main(){
    int n;
    cin >> n;
    vector<int> height;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        height.push_back(x);
    }
    int largestArea = largestRectangleArea(height);
    cout << largestArea << endl;
    return 0;
}