#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int X, Y;
    cin >> X >> Y;

    for (int i = 0; i < ((int)((Y - X) / 60) + 1); i++)
    {
        cout << "All positions change in year " << X + i * 60 << "\n";
    }

    return 0;
}