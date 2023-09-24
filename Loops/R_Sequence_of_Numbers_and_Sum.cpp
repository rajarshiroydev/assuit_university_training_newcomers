#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int n = 1, m = 1;
    while(n > 0 && m > 0) {
        cin >> n >> m;
        if(n <= 0 || m <= 0) break;
        int maxi = max(n, m);
        int mini = min(n, m);
        int sum = 0;
        for(int i = mini; i <= maxi; i++) {
            sum += i;
        }
        for(int i = mini; i <= maxi; i++) {
            cout << i << ' ';
        }
        cout << "sum =" << sum << endl;
    }
    return 0;
}