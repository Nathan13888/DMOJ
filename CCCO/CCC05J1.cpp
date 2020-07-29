#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    double X, Y;
    X = max(0, (a - 100)) * 25 + 15 * b + 20 * c;
    Y = max(0, (a - 250)) * 45 + 35 * b + 25 * c;

    cout << "Plan A costs " << X / 100 << "\n";
    cout << "Plan B costs " << Y / 100 << "\n";

    if (X == Y)
        cout << "Plan A and B are the same price."
             << "\n";
    else if (X < Y)
        cout << "Plan A is cheapest."
             << "\n";
    else
        cout << "Plan B is cheapest."
             << "\n";

    return 0;
}