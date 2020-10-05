#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int A = 100, D = 100;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a < b)
            A -= b;
        else if (b < a)
            D -= a;
    }
    cout << A << "\n";
    cout << D << "\n";

    return 0;
}