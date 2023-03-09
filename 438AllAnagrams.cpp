/*
Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> findAnagrams(string s, string p)
{
    int s_len = s.length();
    int p_len = p.length();

    if (s_len < p_len)
        return {};

    vector<int> freq_p(26, 0);
    vector<int> window(26, 0);

    for (int i = 0; i < p_len; i++)
    {
        freq_p[p[i] - 'a']++;
        window[s[i] - 'a']++;
    }

    vector<int> ans;
    if (freq_p == window)
        ans.push_back(0);

    for (int i = p_len; i < s_len; i++)
    {
        window[s[i - p_len] - 'a']--;
        window[s[i] - 'a']++;
        if (freq_p == window)
        {
            ans.push_back(i - p_len + 1);
        }
    }
    return ans;
}
int main()
{
    string s, p;
    cin >> s >> p;
    vector<int> ans = findAnagrams(s, p);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}