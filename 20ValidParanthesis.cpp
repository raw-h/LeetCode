#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    if (s[0] == ')' || s[0] == '}' || s[0] == ']')
        return false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
                st.pop();
            else
                return false;
        }
        else if (!st.empty() && s[i] == '}')
        {
            if (st.top() == '{')
                st.pop();
            else
                return false;
        }
        else if (!st.empty() && s[i] == ']')
        {
            if (st.top() == '[')
                st.pop();
            else
                return false;
        }
    }
    if (st.empty())
        return true;
    return false;
}

int main(){
    return 0;
}