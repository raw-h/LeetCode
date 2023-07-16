#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<vector<string>> answer;
    if (strs.size() == 0)
        return answer;
    map<string, vector<int>> mapping;
    vector<string> copy_of;
    copy_of = strs;
    for (int i = 0; i < copy_of.size(); i++)
        sort(copy_of[i].begin(), copy_of[i].end());

    for (int i = 0; i < copy_of.size(); i++)
        mapping[copy_of[i]].push_back(i);
        

    for (auto &element : mapping)
    {
        vector<string> temp;
        for (auto &str : element.second)
            temp.push_back(strs[str]);
        answer.push_back(temp);
    }
    return answer;
}

int main()
{
    vector<string> strs;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        strs.push_back(x);
    }

    vector<vector<string>> answer = groupAnagrams(strs);

    for (int i = 0; i < answer.size(); i++)
    {
        for (int j = 0; j < answer[i].size(); j++)
        {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}