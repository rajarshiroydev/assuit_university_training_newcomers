#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    string s; cin >> s;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ',') s[i] = ' ';
        else if(int(s[i]) >= 65 && int(s[i]) <= 90) s[i] = char(int(s[i]) + 32);
        else s[i] = char(int(s[i]) - 32);
    }
    cout << s;
}