#include<bits/stdc++.h>
using namespace std;

string removeOccurances(string s, string p){
    while((s.find(p) > 0) && (s.find(p) < s.end() - 1)){
        s.erase(s.find(p), p.length());
    }
    return s;
}

int main()
{
    string s, p;
    cin >> s >> p;
    string remaining = removeOccurances(s,p);
    cout << remaining << endl;
    return 0;
}