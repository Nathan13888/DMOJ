#include "bits/stdc++.h"
using namespace std;

typedef unsigned long long ull;
const ull M = 1e9;

map<ull, ull> F;

ull f(ull n)
{
    if (F.count(n))
        return F[n];
    ull k = n / 2;
    if (n % 2 == 0)
    { // n=2*k
        return F[n] = (f(k) * f(k) + f(k - 1) * f(k - 1)) % M;
    }
    else
    { // n=2*k+1
        return F[n] = (f(k) * f(k + 1) + f(k - 1) * f(k)) % M;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ull a, b, n;
    cin >> a >> b >> n;

    switch (n)
    {
    case 0:
        cout << a;
        break;
    case 1:
        cout << b;
        break;
    default:
        F[0] = F[1] = 1;
        cout << (b % M * f(n - 1) % M + a % M * f(n - 2) % M) % M;
    }

    return 0;
}