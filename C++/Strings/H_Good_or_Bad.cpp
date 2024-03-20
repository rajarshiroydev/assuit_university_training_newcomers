#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    while(t--) {
        bool flag = false;
        string s; cin >> s;
        for(int i = 0; i <= s.length() - 3; i++) {
            if(s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0' || s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1') {
                flag = true;
                break;
            }
        }
        if(flag) cout << "Good" << endl;
        else cout << "Bad" << endl;
    }
}