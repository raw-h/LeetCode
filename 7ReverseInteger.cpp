#include<bits/stdc++.h>
using namespace std;
int reverse(int x)
{
    int answer = 0;
    while (x != 0)
    {
        int rem = x % 10;
        if ((answer > (INT_MAX / 10)) || (answer < (INT_MIN / 10)))
            return 0;
        answer = (answer * 10) + rem;
        x /= 10;
    }
    return answer;
}

int main(){
    int x;
    cin >> x;
    int answer = reverse(x);
    cout << answer << endl;
    return 0;
}