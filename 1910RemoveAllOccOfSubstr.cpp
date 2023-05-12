#include<bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{
    string s, p;
    cin >> s >> p;
    string remaining = removeOccurrences(s,p);
    cout << remaining << endl;
    return 0;
}