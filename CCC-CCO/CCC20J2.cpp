#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    unsigned int P, N, R, day = 0, total = 0;
    // P target, N infected, R rate

    cin >> P >> N >> R;

    while (P >= total)
    {
        total += N;
        N *= R;
        day++;
    }

    cout << (day-1);

    return 0;
}