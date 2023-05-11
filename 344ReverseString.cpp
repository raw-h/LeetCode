#include<bits/stdc++.h>
using namespace std;
void reverseString(vector<char> &s){
    int strt = 0;
    int e = s.size() - 1;
    while(strt < e){
        swap(s[strt++], s[e--]);
    }
}
int main(){
    vector<char> name;
    int n;
    cin >> n;
    for(int i = 0 ; i< n; i++){
        char x;
        cin >> x;
        name.push_back(x);
    }

    cout << "Proper name = " << endl;
    for(auto it: name)
        cout << it;
    cout << endl;

    cout << "Reversed name = " << endl;
    reverseString(name);
    for (auto it : name)
        cout << it;
    cout << endl;
    return 0;
}