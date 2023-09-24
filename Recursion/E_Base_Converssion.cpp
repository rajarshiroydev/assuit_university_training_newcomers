#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void decimalToBinary(long long n) { // 29
    if(n == 0) return;
    int result = n / 2; // 14
    int rem = n % 2; // 1
    decimalToBinary(result);
    cout << rem;
}

int main() {
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        decimalToBinary(n);
        cout << endl;
    }
    return 0;
}