#include <bits/stdc++.h>
using namespace std;

void solve(long long start, long long end, long long &answer, int x)
{
    if (start > end)
        return;
    long long mid = start + (end - start) / 2;
    long long square = mid * mid;
    if (square == x)
    {
        answer = mid;
        return;
    }
    else if (square > x)
        solve(start, mid - 1, answer, x);
    else if (square < x)
    {
        answer = mid;
        solve(mid + 1, end, answer, x);
    }
}

int main()
{
    int n;
    cin >> n;
    long long start = 0, end = n, mid;
    long long ans;
    // while (start <= end)
    // {
    //     mid = start + (end - start) / 2;
    //     int square = mid * mid;
    //     if (square == n)
    //     {
    //         ans = mid;
    //         break;
    //     }
    //     else if (square > n)
    //         end = mid - 1;
    //     else if (square < n)
    //     {
    //         ans = mid;
    //         start = mid + 1;
    //     }
    // }
    solve(start, end, ans, n);
    cout << ans << endl;
    return 0;
}