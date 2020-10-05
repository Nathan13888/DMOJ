#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    if (a % b)
    {
        int whole = (a - a % b) / b;
        a -= b * whole;
        int gcd = __gcd(a, b);

        if (whole > 0)
            cout << whole << " ";
        cout << a / gcd << "/" << b / gcd << "\n";
    }
    else
        cout << a / b;

    return 0;
}