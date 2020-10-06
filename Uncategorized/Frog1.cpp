#include "bits/stdc++.h"
using namespace std;

int N, MIN = INT_MAX;
vector<int> h, costs;

void dp(int cur, int cost)
{
    if (cur == N - 1)
    {
        MIN = min(MIN, cost);
    }
    if (cur + 1 < N)
        dp(cur + 1, cost += abs(h[cur] - h[cur + 1]));
    if (cur + 2 < N)
        dp(cur + 2, cost += abs(h[cur] - h[cur + 2]));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;
    h.resize(N + 5);
    for (int i = 0; i < N; i++)
        cin >> h[i];

    dp(0, 0);

    cout << MIN << "\n";

    return 0;
}