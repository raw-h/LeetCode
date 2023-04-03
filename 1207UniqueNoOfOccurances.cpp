#include<bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    map<int,int> freq;
    for(auto it: arr){
        freq[it]++;
    }
    vector<int> fazzz;
    vector<int> :: iterator pt;
    for(auto it = freq.begin(); it != freq.end(); it++){
        pt = find(fazzz.begin(), fazzz.end(), it->second);
        if(pt != fazzz.end())
            return false;
        else
            fazzz.push_back(it->second);
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    vector<int>arr;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << uniqueOccurrences(arr) << endl;
    return 0;
}