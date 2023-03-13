#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows){
    vector<vector<int>> answer;
    for(int i = 0; i < numRows; i++){
        vector<int>temp(i+1, 1);
        for(int j = 1; j < i; j++){
            temp[j] = answer[i-1][j-1] + answer[i-1][j];
        }
        answer.push_back(temp);
    }
    return answer;
}
int main(){
    int n;
    cin >> n;
    vector<vector<int>> answer = generate(n);
    return 0;
}