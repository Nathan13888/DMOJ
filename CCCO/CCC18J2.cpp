#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, cnt = 0;
    cin >> N;

    string a, b;
    cin >> a >> b;
    for (int i = 0; i < N; i++)
    {
        if (a[i] == 'C' && b[i] == 'C')
            cnt++;
    }

    cout << cnt << "\n";

    return 0;
}