#include <bits/stdc++.h>
using namespace std;

int c_val(vector<int> &nums_a, vector<int> &nums_b, int size)
{
    cout << "Printing sorted A:" << endl;
    for (int i = 0; i < nums_a.size(); i++)
    {
        cout << nums_a[i] << " ";
    }
    cout << endl;
    cout << "Printing sorted B:" << endl;
    for (int i = 0; i < nums_b.size(); i++)
    {
        cout << nums_b[i] << " ";
    }
    cout << endl;
    int n = size;
    int ans = 0;
    while (n--)
    {
        int i = 0;
        int j = 0;
        if (nums_a[i] == nums_b[j])
        {
            ans++;
            cout << nums_a[i] << " " << nums_b[j];
            cout << endl;
            i++;
            j++;
        }
        else if (nums_a[i] > nums_b[j])
        {
            j++;
        }
        else if (nums_a[i] < nums_b[j])
        {
            i++;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    cout << "Input vector A:" << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    vector<int> b;
    cout << "Input vector B:" << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    vector<int> c;
    for (int i = 0; i < n; i++)
    {
        int size = i + 1;
        sort(a.begin(), a.begin() + size);
        sort(b.begin(), b.begin() + size);
        int input_for_c = c_val(a, b, size);
        c.push_back(input_for_c);
    }

    cout << "Printing C:" << endl;
    for (int i = 0; i < n; i++)
        cout << c[i] << " ";
    cout << endl;
    return 0;
}