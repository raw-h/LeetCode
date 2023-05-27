#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string s)
{
    string ans;
    ans.push_back(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        if (ans.back() == s[i])
            ans.pop_back();
        else
            ans.push_back(s[i]);
    }
    return ans;
}
int main()
{
    string s;
    cin >> s;
    string ans = removeDuplicates(s);
    cout << ans << endl;
    return 0;
}