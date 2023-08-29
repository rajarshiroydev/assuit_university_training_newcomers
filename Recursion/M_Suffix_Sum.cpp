#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void nSum(int t, int n, int count, long long sum) { // 5 3 5 0 
    if(count == t) { // 5 == 5
        cout << sum; // 15
        return;
    }
    long long num; cin >> num; // 1 8 2 10 3
    if(count >= t - n) { // 4 >= 2
        sum += num; // 2+10+3
    }
    nSum(t, n, count + 1, sum);
}

int main() {
    int t, n; cin >> t >> n;
    long long sum = 0;
    int count = 0;
    nSum(t, n, count, sum); // 5 3 0 0 
    return 0;
}