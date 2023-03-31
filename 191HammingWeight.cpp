#include<bits/stdc++.h>
using namespace std;
int hammingWeight(uint32_t n)
{
    int answer = 0;
    while (n)
    {
        if (n & 1)
            answer++;
        n = n >> 1;
    }
    return answer;
}

int main(){
    return 0;
}