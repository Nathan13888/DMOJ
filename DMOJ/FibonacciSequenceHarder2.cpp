#include <bits/stdc++.h>
using namespace std;

#define long unsigned long long
#define M 1000000007
// const long M = 1000000007;

map<long, long> F;
// vector<pair<long, long>> F;

long f(long n)
{
    if (F.count(n))
        return F[n];
    long k = n / 2;
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string tar;
    cin >> tar;

    // if (tar == "1")
    //     cout << 1;
    // else if (tar == "2147483647")
    //     cout << 822963728;
    // else
    // {
    long n = 0;
    for (auto i = 0; i < tar.length(); i++)
        n = (n * 10 + (int)tar[i] - '0') % 2000000016;
    F[0] = F[1] = 1;
    cout << f(n - 1);
    // }
    return 0;
}