#include "bits/stdc++.h"
using namespace std;

typedef unsigned long long ull;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, T;
    string comb;
    cin >> N >> T >> comb;
    while (T--)
    {
        string tmp;
        for (int i = 0; i < N; i++)
            tmp += "0";
        // for front
        if (comb[1] != comb[N - 1])
            tmp[0] = '1';
        // for everything in between
        for (int i = 1; i < N - 1; i++)
            if (comb[i - 1] != comb[i + 1])
                tmp[i] = '1';
        // for back
        if (comb[0] != comb[N - 2])
            tmp[N - 1] = '1';
        comb = tmp;
    }
    cout << comb << "\n";

    return 0;
}