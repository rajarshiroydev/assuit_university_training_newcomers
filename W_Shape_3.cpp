#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    int t;
    cin >> t;
    int star = 1;
    int spaces = t - 1;
    for(int i = 0; i < t; i++) {
        for(int j = 0; j < spaces; j++) {
            cout << ' ';
        }
        for(int k = 0; k < star; k++) {
            cout << '*';
        }
        cout << endl;
        star += 2;
        spaces--;
    }
    spaces++;
    star -= 2;
    for(int i = 0; i < t; i++) {
        for(int k = 0; k < spaces; k++) {
            cout << ' ';
        }
        for(int j = 0; j < star; j++) {
            cout << '*';
        }
        spaces++;
        star -= 2;
        cout << endl;
    }
}