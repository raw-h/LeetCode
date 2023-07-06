#include <bits/stdc++.h>
using namespace std;

int countPrimes(int n)
{
    vector<bool> prime(n + 1, true);
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
            count++;
        for (int j = 2 * i; j < n; j += i)
            prime[j] = 0;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int answer = countPrimes(n);
    cout << answer << endl;
    return 0;
}