#include <bits/stdc++.h>
using namespace std;

string convert(string s, int numRows)
{
    if (numRows == 1)
        return s;
    
    string answer = {};
    int cycle = (numRows - 1) * 2;
    for(int i = 0; i < numRows; i++){
        for(int j = i; j < s.length(); j += cycle){
            answer.push_back(s[j]);
            int k = j + cycle - (2 * i);
            if(i != 0 && i != (numRows-1) && k < s.length())
                answer.push_back(s[k]);
        }
    }
    return answer;
}
int main()
{
    int rows;
    string str;
    cin >> rows >> str;
    string answer = convert(str, rows);
    cout << answer << endl;
    return 0;
}