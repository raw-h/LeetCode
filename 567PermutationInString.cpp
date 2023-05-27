#include <bits/stdc++.h>
using namespace std;

bool checkInclusion(string s1, string s2)
{
    int len1 = s1.length();
    int len2 = s2.length();
    if (len1 > len2)
        return false;
    else
    {
        map<char, int> freq;
        for (int i = 0; i < len1; i++)
            freq[s1[i]]++;
        int j = 0;
        while (j < len2)
        {
            map<char, int> window;
            int count = 0, i = 0;
            while (i < len1 && j < len2)
            {
                count++;
                window[s2[j]]++;
                j++;
                i++;
            }
            if (freq == window)
                return true;
            else if (count < len1)
                return false;
            j = j - len1;
            j++;
        }
        return false;
    }
    return false;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    bool finalAns = checkInclusion(s1, s2);
    cout << finalAns << endl;
    return 0;
}