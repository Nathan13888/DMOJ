#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int m, n, ways = 0;
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = n; j >= 1; j--)
            if (i + j == 10)
                ways++;
    }
    cout << "There " << (ways == 1 ? "is " : "are ") << ways << (ways == 1 ? " way" : " ways") << " to get the sum 10.\n";

    return 0;
}