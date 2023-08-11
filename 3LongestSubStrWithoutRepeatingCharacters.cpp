#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s)
{
    int count = 0;
    int maxi = INT_MIN;
    int arr[26] = {0};

    for(int i = 0; i < s.length(); i++){
        if(arr[s[i] - 97] == 1){
            arr[s[i] - 97] = 0;
            maxi = max(count, maxi);
            count = 0;
            cout << "Count decreased to 0 at index"<< i << endl;
            i = i - 1;
        }

        else{
            arr[s[i] - 97] = 1;
            count++;
            cout << "Count increased" << endl;
        }
    }
    return maxi;
}

int main(){
    string str = "abcabcbb";

    int max_length = lengthOfLongestSubstring(str);

    cout << max_length << endl;
    return 0;
}