#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void sumofN(int t, long long sum, int count) {
    if(count == t) {
        cout << sum;
        return;
    }
    long long n; cin >> n;
    sum += n;
    sumofN(t, sum, count + 1);
}

int main() {
    int t; cin >> t;
    long long sum = 0;
    int count = 0;
    sumofN(t, sum, count);
    return 0;
}