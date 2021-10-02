#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> pi;

vector<ull> ps;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k, q;
    cin >> n >> k;
    ps.resize(n);
    int t;
    for (auto i = 0; i < k; i++)
    {
        cin >> t;
        ps[t]++;
    }
    for (auto i = 1; i < n; i++)
    {
        ps[i] += ps[i - 1];
    }
    cin >> q;
    int a, b;
    while (q--)
    {
        cin >> a >> b;
        int psa = 0;
        if (a > 0)
            psa = ps[a - 1];
        cout << ps[b] - psa << "\n";
    }

    return 0;
}