#include<bits/stdc++.h>
using namespace std;
int smallestEvenMultiple(int n)
{
    if (n >= 2 && (n % 2 == 0))
        return n;
    else if (n > 2)
        return n * 2;
    else
        return 2;
}

int main(){
    int n;
    cin >> n;
    int answer = smallestEvenMultiple(n);
    cout << answer << endl;
    return 0;
}