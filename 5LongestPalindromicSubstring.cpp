#include<bits/stdc++.h>
using namespace std;

void st_end_value(int l, int r, int &st, int &end, string s, int &max_len)
{
    while (l >= 0 && r < s.length())
    {
        if (s[l] == s[r])
        {
            l--;
            r++;
        }
        else
            break;
    }
    int len = r - l - 1;
    if (len > max_len)
    {
        max_len = len;
        st = l + 1;
        end = r - 1;
    }
}
string longestPalindrome(string s)
{
    if (s.length() <= 1)
        return s;

    int max_len = 1;
    int n = s.length();
    int st = 0;
    int end = 0;

    for (int i = 0; i < n - 1; i++)
    {
        st_end_value(i, i, st, end, s, max_len);
    }

    for (int i = 0; i < n - 1; i++)
    {
        st_end_value(i, i + 1, st, end, s, max_len);
    }
    return s.substr(st, max_len);
}

int main(){
    return 0;
}