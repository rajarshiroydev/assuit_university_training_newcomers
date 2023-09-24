#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    string s; cin >> s;
    int sum = 0;
    for(int i = 0; i < s.size(); i++) {
        sum += int(s[i]) - 48;
    }
    cout << sum;
}