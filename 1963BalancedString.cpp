#include <bits/stdc++.h>
using namespace std;

int minSwaps(string s)
{
    stack<char> st;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '[')
            st.push('[');
        else
        {
            if (!st.empty())
            {
                if (st.top() == '[')
                    st.pop();
            }
            else
                st.push(']');
        }
    }
    return st.size() / 2;
}

int main(){
    string s;
    cin >> s;
    int ans = minSwaps(s);
    cout << ans << endl;
    return 0;
}