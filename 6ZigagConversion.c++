#include <bits/stdc++.h>
using namespace std;

string convert(string s, int numRows)
{
    if (numRows == 1)
        return s;
    
    string answer = {};
    for(int i = 0; i < numRows; i++){
        int increment = (numRows - 1) * 2;
        for(int index = i; index < s.length(); index += increment){
            answer.push_back(s[index]);
            if(i != 0 && i != (numRows-1) && s[(index + increment) - (i * 2)])
                answer.push_back(s[(index + increment) - (i * 2)]);
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