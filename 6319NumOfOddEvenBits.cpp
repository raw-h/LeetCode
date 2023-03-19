#include<bits/stdc++.h>
using namespace std;

vector<int> evenOddBit(int n){
    vector<int> answer(2,0);
    int temp = n;
    int remainder;
    int i = 0;
    while(temp>0){
        remainder = temp % 2;
        if((i % 2 == 0) && (remainder == 1))
            answer[0]++;
        else if((i % 2 == 1) && (remainder == 1))
            answer[1]++;
        temp /= 2;
        i++;
    }
    return answer;
}
int main(){
    int n;
    cin >> n;
    vector<int> answer = evenOddBit(n);
    for(auto it: answer)
        cout << it << endl;
    return 0;
}