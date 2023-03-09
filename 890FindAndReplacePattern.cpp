/*
Given a list of strings words and a string pattern, return a list of words[i] that match pattern. You may return the answer in any order.
A word matches the pattern if there exists a permutation of letters p so that after replacing every letter x in the pattern with p(x), we get the desired word.
Recall that a permutation of letters is a bijection from letters to letters: every letter maps to another letter, and no two letters map to the same letter.
*/

#include <bits/stdc++.h>
using namespace std;
vector<string> findAndReplace(vector<string> &words, string p)
{
    vector<string> v;
    for (int i = 0; i < words.size(); i++)
    {
        map<char, char> m;
        set<char> dup;
        int flag = 0;
        for (int j = 0; j < words[i].size(); j++)
        {
            if (m.find(p[j]) == m.end())
            {
                m[p[j]] = words[i][j];
            }
            else
            {
                if (m[p[j]] == words[i][j])
                {
                    continue;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        for (auto it : m)
        {
            dup.insert(it.second);
        }
        if (dup.size() != m.size())
            flag = 1;

        if (flag == 0)
        {
            v.push_back(words[i]);
        }
    }
    return v;
}
int main()
{
    vector<string> words;
    string pattern;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        words.push_back(s);
    }
    cin >> pattern;

    vector<string> ans = findAndReplace(words, pattern);
    for (auto it : ans)
    {
        cout << it << endl;
    }
    return 0;
}