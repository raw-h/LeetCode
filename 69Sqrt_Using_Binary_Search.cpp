#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long start = 0, end = n, mid;
    long long ans;
    while(start <= end){
        mid = start + (end-start)/2;
        int square = mid * mid;
        if(square == n){
            ans = mid;
            break;
        }
        else if(square > n)
            end = mid - 1;
        else if(square < n){
            ans = mid;
            start = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}