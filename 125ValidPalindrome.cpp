#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s)
{
    int end = s.length() - 1;
    int start = 0;
    while (start < end)
    {
        if (isalnum(s[start]) && isalnum(s[end]))
        {
            if (tolower(s[start]) == tolower(s[end]))
            {
                end--;
                start++;
            }
            else
                return false;
        }
        else if(!isalnum(s[start]))
            start++;
        else 
            end--;
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    bool answer = isPalindrome(s);
    cout << answer << endl;
    return 0;
}