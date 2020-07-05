#include "bits/stdc++.h"
using namespace std;

map<char, char> F;

int check(string s)
{
    int n = (s.size() % 2 == 1 ? (s.size() - 1) / 2 + 1 : s.size() / 2);
    for (int i = 0; i < n; i++)
    {
        char c1 = F[s[i]];
        char c2 = s[s.size() - 1 - i];
        // cout << c1 << "  " << c2 << "\n";
        if (c1 != c2)
            return 0;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    F['0'] = '0';
    F['1'] = '1';
    F['6'] = '9';
    F['8'] = '8';
    F['9'] = '6';
    int start, end, count = 0;

    cin >> start >> end;

    for (int i = start; i <= end; i++)
        count += check(to_string(i));

    cout << count;

    return 0;
}