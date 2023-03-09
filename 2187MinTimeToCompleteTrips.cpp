/*
You are given an array time where time[i] denotes the time taken by the ith bus to complete one trip.
Each bus can make multiple trips successively; that is, the next trip can start immediately after completing the current trip.Also, each bus operates independently; that is, the trips of one bus do not influence the trips of any other bus.
You are also given an integer totalTrips, which denotes the number of trips all buses should make in total. Return the minimum time required for all buses to complete at least totalTrips trips.
*/

#include <bits/stdc++.h>
using namespace std;

long long minimumTime(vector<int> &time, int total)
{
    long long l = 0;
    long long r = total * (long long)time[0];
    long long ans = r;
    while (l < r)
    {
        long long mid = (l + r) / 2;
        long long count = 0;
        for (int i = 0; i < time.size(); i++)
        {
            count = count + (mid / time[i]);
        }
        if (count >= total)
        {
            ans = min(ans, mid);
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> time;
    int totalTrips;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int p;
        cin >> p;
        time.push_back(p);
    }
    cin >> totalTrips;
    long long ans = minimumTime(time, totalTrips);
    cout << ans << endl;
    return 0;
}