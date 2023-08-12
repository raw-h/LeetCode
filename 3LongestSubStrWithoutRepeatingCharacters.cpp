#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s)
{
    // int count = 0;
    // int maxi = INT_MIN;
    // map<char, int> freq;
    // for(int i = 0; i < s.length(); i++){
    //     if(freq[s[i]] == 1){
    //         freq.clear();
    //         maxi = max(count, maxi);
    //         i = i - count;
    //         count = 0;
    //     }
    //     else{
    //         freq[s[i]] = 1;
    //         count++;
    //     }
    // }
    // maxi = max(count, maxi);
    // return maxi;

    set<char> st;
    int n = s.size();
    int i = 0, j = 0;
    int ans = 0;
    while (j < n)
    {
        if (st.find(s[j]) == st.end())
        {
            st.insert(s[j]);
            ans = max(ans, j - i + 1);
            j++;
        }
        else
        {
            st.erase(s[i]);
            i = i + 1;
        }
    }
    return ans;
}

int main(){
    string str = "aaaaaa abcdefaaaaaa";

    int max_length = lengthOfLongestSubstring(str);

    cout << max_length << endl;
    return 0;
}