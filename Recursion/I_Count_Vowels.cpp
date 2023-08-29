#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void countVowels(string s, int count, int index)
{
    if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u' || s[index] == 'A' || s[index] == 'E' || s[index] == 'I' || s[index] == 'O' || s[index] == 'U') count += 1;
    if(index == s.size() - 1) {
        cout << count;
        return;
    }
    index += 1;
    countVowels(s, count, index);

}

int main()
{
    string s;
    getline(cin, s);
    int count = 0;
    int index = 0;
    countVowels(s, count, index);
    return 0;
}