#include<bits/stdc++.h>
using namespace std;
int GoodSubStr(string s){
    if(s.length() < 3){
        return 0;
    }
    int count = 0;
    for(int i = 0; i < s.length() - 2; i++){
        if((s[i] != s[i+1]) && (s[i+1] != s[i+2]) && (s[i] != s[i+2])){
            count++;
        }
    }
    return count;
}
int main(){
    string s;
    cin >> s;
    int answer = GoodSubStr(s);
    cout << answer << endl;
    return 0;
}