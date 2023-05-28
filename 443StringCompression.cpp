#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{
    chars.push_back('/');
    vector<char> symbol;
    vector<int> freq;
    int n = chars.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (chars[i] != chars[i + 1])
            symbol.push_back(chars[i]);
    }
    int count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (chars[i] == chars[i + 1])
            count++;
        else{
            freq.push_back(count);
            count = 1;
        }
    }
    chars.clear();
    int i = 0;
    int j = 0;
    int k = symbol.size();
    int m = freq.size();
    while(i < k)
    {
        chars.push_back(symbol[i]);
        if (freq[j] > 1 && freq[j] < 10)
        {
            char c = (char)(freq[j] + 48);
            chars.push_back(c);
        }
        else if (freq[j] >= 10)
        {
            string str = to_string(freq[j]);
            int len = str.length();
            for (int l = 0; l < len; l++)
            {
                chars.push_back(str[l]);
            }
        }
        i++;
        j++;
    }
    for(auto it: chars){
        cout << it << " ";
    }
    cout << endl;
    return chars.size();
}
int main()
{
    vector<char> chars;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        chars.push_back(x);
    }
    int ans = compress(chars);
    cout << "Answer: " << ans << endl;
    return 0;
}