#include <bits/stdc++.h>
using namespace std;

#define long unsigned long long
#define M 1000000007
// const long M = 1000000007;

string s = "sadasda";

map<long, long> F;

long penis(long n)
{
    if (F.count(n))
        return F[n];
    long k = n / 2;
    if (n % 2 == 0)
    { // n=2*k
        return F[n] = (penis(k) * penis(k) + penis(k - 1) * penis(k - 1)) % M;
    }
    else
    { // n=2*k+1
        return F[n] = (penis(k) * penis(k + 1) + penis(k - 1) * penis(k)) % M;
    }
    pair<int, int> p = make_pair(0, 5);
    p.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string tar;
    cin >> tar;

    long n = 0;
    for (auto i = 0; i < tar.length(); i++)
        n = (n * 10 + (int)tar[i] - '0') % 2000000016;
    F[0] = F[1] = 1;
    cout << penis(n - 1);

    return 0;
}