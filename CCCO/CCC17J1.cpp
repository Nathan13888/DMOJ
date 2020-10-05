#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int x, y;
    cin >> x >> y;

    bool nX = x > 0, nY = y > 0;
    if (nX && nY)
        cout << "1\n";
    else if (!nX && nY)
        cout << "2\n";
    else if (!nX && !nY)
        cout << "3\n";
    else
        cout << "4\n";

    return 0;
}