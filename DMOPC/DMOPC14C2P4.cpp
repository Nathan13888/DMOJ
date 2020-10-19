#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    vector<int> ma(N), pr(N);

    for (auto &x : ma)
        cin >> x;

    pr[0] = ma[0];

    for (int i = 1; i < N; i++)
        pr[i] = pr[i - 1] + ma[i];

    int Q, a, b;
    cin >> Q;
    while (Q--)
    {
        cin >> a >> b;
        cout << pr[b] - pr[a] + ma[a] << "\n";
    }

    return 0;
}