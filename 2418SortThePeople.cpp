#include<bits/stdc++.h>
using namespace std;

vector<string> sortPeople(vector<string> &names, vector<int> &heights)
{
    map<int, string, greater<int>> people;
    int n = names.size();
    for (int i = 0; i < n; i++)
        people[heights[i]] = names[i];
    vector<string> people_sorted;
    for (auto it : people)
    {
        people_sorted.push_back(it.second);
    }
    return people_sorted;
}

int main(){
    return 0;
}