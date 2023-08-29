#include <bits/stdc++.h>
using namespace std;

long long int decimalToBinary(long long int n)
{
    long long ans = 0;
    int remainder, i = 1;

    // Until the value of n becomes 0.
    while (n != 0)
    {
        remainder = n % 2;
        ans += remainder * i;
        i = i * 10;
        n = n / 2;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int bin = decimalToBinary(n);
        int rem;
        int sum = 0;
        int i = 0;
        while (bin > 0)
        {
            rem = bin % 10;
            if (rem == 1)
            {
                sum += rem * pow(2, i);
                i++;
            }
            bin /= 10;
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}
//r, t, u, w, x