/*
You are given a string array words and a string s, where words[i] and s comprise only of lowercase English letters.

Return the number of strings in words that are a prefix of s.

A prefix of a string is a substring that occurs at the beginning of the string. A substring is a contiguous sequence of characters within a string.
*/
#include <bits/stdc++.h>
using namespace std;
int countPrefixes(vector<string> &words, string prefix)
{
    int ans = 0;
    bool flag = false;
    for (int i = 0; i < words.size(); i++)
    {
        for (int j = 0; j < words[i].length(); j++)
        {
            if (words[i][j] == prefix[j])
            {
                flag = true;
            }
            else
                flag == false;
            if (!flag)
                break;
        }
        if (flag)
            ans++;
        flag = false;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<string> words;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        words.push_back(str);
    }
    string prefix;
    cin >> prefix;
    int num = countPrefixes(words, prefix);
    cout << num << endl;
    return 0;
}