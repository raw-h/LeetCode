#include <bits/stdc++.h>
using namespace std;
bool canConstruct(string ransomNote, string magazine)
{
    if (ransomNote.length() > magazine.length())
    {
        return false;
    }
    sort(ransomNote.begin(), ransomNote.end());
    sort(magazine.begin(), magazine.end());
    int i = 0;
    int j = 0;
    int count = 0;
    while (i < ransomNote.length() && j < magazine.length())
    {
        if (ransomNote[i] != magazine[j])
        {
            j++;
        }
        else
        {
            count++;
            i++, j++;
        }
    }
    if (count == ransomNote.length())
        return true;
    else
        return false;
}
int main()
{
    string a, b;
    cin >> a >> b;
    bool ans = canConstruct(a, b);
    cout << ans << endl;
    return 0;
}