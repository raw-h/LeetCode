#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n)
{
    int ans = 1;
    for (int i = 0; i < 31; i++)
    {
        if (ans == n)
            return true;
        if (ans < INT_MAX / 2)
            ans *= 2;
    }
    return false;
}
int main(){
    return 0;
}