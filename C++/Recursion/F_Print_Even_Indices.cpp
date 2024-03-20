#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void evenIndex(int t, int index) {
    if(index == t) return;
    long long n; cin >> n;
    evenIndex(t, index + 1);
    if(index % 2 == 0) {
        if(index == 0) cout << n;
        else cout << n << ' ';
    }
}

int main() {
    int t; cin >> t;
    evenIndex(t, 0);
    return 0;
}