#include<bits/stdc++.h>
using namespace std;
int leastInterval(vector<char>&tasks, int n){
    unordered_map<char, int> freq;
    int max_val = INT_MIN;
    for(int i = 0; i< tasks.size(); i++){
        freq[tasks[i]]++;
        max_val = max(freq[tasks[i]], max_val);
    }
    int ans = (max_val - 1) * (n + 1);
    for(auto pt: freq){
        if(pt.second == max_val)
            ans++;
    }
    return max(ans, (int)tasks.size());
}
int main(){
    int n;
    cin >> n;
    vector<char> task;
    for(int i = 0; i < n; i++){
        char a;
        cin >> a;
        task.push_back(a);
    }
    int x;
    cin >> x;
    int ans = leastInterval(task,x);
    cout << ans << endl;
    return 0;
}