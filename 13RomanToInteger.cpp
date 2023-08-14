#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
    map<char, int> rom_int_map;
    rom_int_map.insert({'I', 1});
    rom_int_map.insert({'V', 5});
    rom_int_map.insert({'X', 10});
    rom_int_map.insert({'L', 50});
    rom_int_map.insert({'C', 100});
    rom_int_map.insert({'D', 500});
    rom_int_map.insert({'M', 1000});

    int result = 0;
    for(int i = 0; i < s.length(); i++){
        if(rom_int_map[s[i]] < rom_int_map[s[i + 1]]){
            result += (rom_int_map[s[i+1]] - rom_int_map[s[i]]);
            i++;
        }
        else if (rom_int_map[s[i]] > rom_int_map[s[i + 1]])
            result += rom_int_map[s[i]];
        else{
            result += (rom_int_map[s[i + 1]] + rom_int_map[s[i]]);
            i++;
        }
    }
    return result;
}

int main()
{
    string str;
    cin >> str;
    int number = romanToInt(str);
    cout << number << endl;
    return 0;
}