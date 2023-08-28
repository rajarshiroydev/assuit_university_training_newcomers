#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void factorial(int n, long long fact) {
    if(n == 1) { // 1
        cout << fact; // 120
        return;
    }
    fact *= n; // 5*4*3*2
    // n -= 1;
    factorial(--n, fact); // 3, 120
}

int main() {
    int n; cin >> n;
    long long fact = 1;
    factorial(n, fact);
    return 0;
}