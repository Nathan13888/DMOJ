#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int W = 0;

    for (int i = 0; i < 6; i++)
    {
        char c;
        cin >> c;
        if (c == 'W')
            W++;
    }

    if (W == 0)
        cout << "-1\n";
    else if (W < 3)
        cout << "3\n";
    else if (W < 5)
        cout << "2\n";
    else
        cout << "1\n";

    return 0;
}