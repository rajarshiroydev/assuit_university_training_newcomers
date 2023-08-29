//loops
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

bool sumCheck(int i, int a, int b) {//2 2 5
    int sum = 0;
    int rem;
    while(i > 0) {
        rem = i % 10;// 2
        sum += rem;//2
        i /= 10;//0
    }
    if(sum >= a && sum <= b) return true;
    else return false;
}

int main() {
    int n, a, b; cin >> n >> a >> b;//20 2 5
    int sum = 0;
    for(int i = 1; i <= n; i++) {//2
        if(sumCheck(i, a, b)) sum += i;
    }
    cout << sum;
    return 0;
}

