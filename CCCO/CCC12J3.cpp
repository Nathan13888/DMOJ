#include "bits/stdc++.h"
using namespace std;

string f(char c, int t)
{
    string ret;
    while (t--)
        ret += c;
    return ret;
}

int k = 1; // = 69;

inline string fA() { return f('*', k); }
inline string fX() { return f('x', k); }
inline string fS() { return f(' ', k); }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> k;

    for (int i = 0; i < k; i++)
        cout << (fA() + fX() + fA()) << "\n";
    for (int i = 0; i < k; i++)
        cout << (fS() + fX() + fX()) << "\n";
    for (int i = 0; i < k; i++)
        cout << (fA() + fS() + fA()) << "\n";

    return 0;
}