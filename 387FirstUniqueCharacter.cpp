#include<bits/stdc++.h>
using namespace std;
int firstUniqChar (string s)
{
    unordered_map<char, int> freq;
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i]]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (freq[s[i]] == 1)
            return i;
    }
    return -1;
}
int main()
{
    string s;
    cin >> s;
    int answer = firstUniqChar(s);
    cout << "First uniq index is: " << answer << endl;
    return 0;
}