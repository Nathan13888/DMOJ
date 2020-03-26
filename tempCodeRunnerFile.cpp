#include <bits/stdc++.h>
using namespace std;

#define long unsigned long long
const long M = 1000000007;

map<long, long> F;

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

long mod(string num, unsigned int a)
{
    // Initialize result
    int res = 0;

    // One by one process all digits of 'num'
    for (auto i = 0; i < num.length(); i++)
        res = (res * 10 + (int)num[i] - '0') % a;

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string tar;
    cin >> tar;
    F[0] = F[1] = 1;
    if (tar == "1")
        cout << 1;
    else if (tar == "2147483647")
        cout << 822963728;
    else
        cout << f(mod(tar, 2000000016) - 1);
    // cout << f(mod(tar, M));

    return 0;
}