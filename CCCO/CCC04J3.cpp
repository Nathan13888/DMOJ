#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<string> N;
    N.resize(n);
    vector<string> M;
    M.resize(m);
    for (int i = 0; i < n; i++)
        cin >> N[i];
    for (int i = 0; i < m; i++)
        cin >> M[i];

    for (auto x : N)
        for (auto y : M)
            cout << x << " as " << y << "\n";

    return 0;
}