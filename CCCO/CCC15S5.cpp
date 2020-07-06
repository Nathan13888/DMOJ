#include "bits/stdc++.h"
using namespace std;

int N, M;
vector<int> nn, mm;
int dp[3001][101][101][2];

int solve(int p, int l, int r, int t)
{
    int &ans = dp[p][l][r][t];
    if (ans != -1)
        return ans;
    else if (p == N)
        if (l <= r && M)
            if (t)
                ans = mm[r] + solve(p, l, r - 1, 0);
            else
                ans = solve(p, l + 1, r, 1);
        else
            ans = 0;
    else if (t)
    {
        ans = max(solve(p, l, r, 0), nn[p] + solve(p + 1, l, r, 0));
        if (l <= r && M)
            ans = max(ans, mm[r] + solve(p, l, r - 1, 0));
        else
            ans = max(ans, 0);
    }
    else
    {
        ans = solve(p + 1, l, r, 1);
        if (l <= r && M)
            ans = max(ans, solve(p, l + 1, r, 1));
        else
            ans = max(ans, 0);
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    memset(dp, -1, sizeof(dp));
    cin >> N;
    nn.resize(N);
    for (int i = 0; i < N; i++)
        cin >> nn[i];
    cin >> M;
    mm.resize(M);
    for (int i = 0; i < M; i++)
        cin >> mm[i];
    sort(mm.begin(), mm.end()); // becareful of not making extra cells or else std::sort messes up

    cout << solve(0, 0, max(0, M - 1), 1) << "\n";

    return 0;
}