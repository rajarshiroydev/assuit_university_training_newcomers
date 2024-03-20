#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void maxValue(int t, int count, int maxi) {
    if(count == t) {
        cout << maxi;
        return;
    }
    int n; cin >> n;
    if(n > maxi) maxi = n;
    maxValue(t, count + 1, maxi);
}

int main() {
    int t; cin >> t;
    int count = 0;
    int maxi = INT_MIN;
    maxValue(t, count, maxi);
}