#include<bits/stdc++.h>
using namespace std;

void solve(string digits, vector<string> &answer, int index, string output, string mapping[])
{
    if (index >= digits.length())
    {
        answer.push_back(output);
        return;
    }
    int num = digits[index] - '0';
    string value = mapping[num];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digits, answer, index + 1, output, mapping);
        output.pop_back();
    }
}

vector<string> letterCombinations(string digits)
{
    vector<string> answer;
    if (digits.length() == 0)
        return answer;
    string output = "";
    int index = 0;
    string mapping[10] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, answer, index, output, mapping);
    return answer;
}

int main(){
    string digits;
    cin >> digits;
    vector<string> answer;
    answer = letterCombinations(digits);
    for(auto it: answer){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}