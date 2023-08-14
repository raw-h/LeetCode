#include <bits/stdc++.h>
using namespace std;

string intToRoman(int num)
{
    // string str;
    // str = "";
    // vector<string> romans = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    // vector<int> nums = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    // int pos = 0;
    // while (num > 0)
    // {
    //     if (num >= nums[pos])
    //     {
    //         int count = num / nums[pos];
    //         while (count--)
    //         {
    //             str += romans[pos];
    //         }
    //         num = num % nums[pos];
    //     }
    //     pos++;
    // }
    // return str;
    string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string hndr[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string thsd[] = {"", "M", "MM", "MMM"};

    return thsd[num / 1000] + hndr[(num % 1000) / 100] + tens[(num % 100) / 10] + ones[num % 10];
}

int main()
{
    int num;
    cin >> num;
    string number = intToRoman(num);
    cout << number << endl;
    return 0;
}