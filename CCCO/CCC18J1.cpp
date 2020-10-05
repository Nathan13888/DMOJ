#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((a == 8 || a == 9) && (d == 8 || d == 9))
        if (b == c)
        {
            cout << "ignore\n";
            return 0;
        }

    cout << "answer\n";
    return 0;
}