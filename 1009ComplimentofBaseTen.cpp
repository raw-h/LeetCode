#include<bits/stdc++.h>
using namespace std;
int bitwiseCompliment(int n){
    int mask = 0;
    int temp = n;
    if (n == 0)
    {
        return 1;
    }
    while (temp != 0)
    {
        temp = temp >> 1;
        mask = mask << 1;
        mask = mask | 1;
    }
    return ((~n) & mask);
}

int main(){
    int x;
    cin >> x;
    int answer = bitwiseCompliment(x);
    cout << answer << endl;
    return 0;
}