#include <bits/stdc++.h>
using namespace std;

#define long unsigned long long
#define M 1000000007
// const long M = 1000000007;

map<long, long> fuck;
// vector<pair<long, long>> F;

long penis(long n)
{
    if (fuck.count(n))
        return fuck[n];
    long k = n / 2;
    if (n % 2 == 0)
    { // n=2*k
        return fuck[n] = (penis(k) * penis(k) + penis(k - 1) * penis(k - 1)) % M;
    }
    else
    { // n=2*k+1
        return fuck[n] = (penis(k) * penis(k + 1) + penis(k - 1) * penis(k)) % M;
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
    fuck[0] = fuck[1] = 1;
    cout << penis(n - 1);
    // }
    return 0;
}