#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T, C, cnt = 0;
    cin >> T >> C;
    vector<int> chores(C);

    for (int i = 0; i < C; i++)
        cin >> chores[i];

    sort(chores.begin(), chores.end());

    for (auto x : chores)
    {
        if (x <= T)
        {
            T -= x;
            cnt++;
        }
        else
            break;
    }

    cout << cnt;

    return 0;
}