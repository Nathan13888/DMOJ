#include "bits/stdc++.h"
using namespace std;

typedef unsigned long long ull;

const int M = 1e9 + 7;

int a, b, d, c, e, N;

ull f(int x)
{
    if (x == 0)
        return e;
    return ((a % M * (f(floor(x / b)) % M) % M + (c % M * f(floor(x / d))) % M) % M) % M;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> a >> b >> c >> d >> e >> N;

    cout << f(N);

    return 0;
}