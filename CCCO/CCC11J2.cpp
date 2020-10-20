#include "bits/stdc++.h"
using namespace std;

int calc(int t, int h)
{
    int ret = -6 * t * t * t * t;
    ret += h * t * t * t;
    ret += 2 * t * t;
    ret += t;
    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int h, m, T = -1;
    cin >> h >> m;

    for (int i = 1; i < m; i++)
    {
        if (calc(i, h) <= 0)
        {
            T = i;
            break;
        }
    }

    if (T == -1)
        cout << "The balloon does not touch ground in the given time.\n";
    else
        cout << "The balloon first touches ground at hour:\n" << T << "\n";

    return 0;
}