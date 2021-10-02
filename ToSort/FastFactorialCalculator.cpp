#include "bits/stdc++.h"
using namespace std;

typedef unsigned long UINT;

// https://dmoj.ca/problem/factorial

const UINT M = 4294967296;

// map<UINT, UINT> dp;

// UINT f(UINT n)
// {
//     // if (dp.count(n))
//     //     return dp[n];
//     if (n == 0 || n == 1)
//         return 1;
//     else
//         return (UINT)(f(n - 1) * f(n - 2)) % M;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    UINT n;

    // dp[1] = 1;

    while (N--)
    {
        cin >> n;
        // cout << f(n) << "\n";
        int r = 1;
        while (n > 1)
        {
            r = (r * ((n / M) % 2 ? M - 1 : 1)) % M;
            for (int i = 2; i <= n % M; i++)
                r = (r * i) % M;
            n /= M;
        }
        cout << r % M << "\n";
    }

    return 0;
}