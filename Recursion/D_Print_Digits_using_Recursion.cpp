#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void printDigits(long long n) {
    if(n == 0) return;
    long long lastDigit = n % 10; // 1
    printDigits(n / 10);
    if(n == 0) cout << lastDigit;
    else cout << lastDigit << ' ';
}

int main() {
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        if(n == 0) cout << n;
        printDigits(n);
        cout << endl;
    }
    return 0;
}