#include <bits/stdc++.h>
using namespace std;

int subtractProductAndSum(int n)
{
    int product = 1;
    int temp = n;
    int sum = 0;
    while (temp > 0)
    {
        product *= (temp % 10);
        sum += (temp % 10);
        temp /= 10;
    }
    int answer = product - sum;
    return answer;
}

int main()
{
    return 0;
}