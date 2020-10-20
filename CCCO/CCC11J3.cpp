#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, len = 2;
    cin >> a >> b;
    while (true)
    {
        int c = a - b;
        len++;
        if (b < c)
            break;
        a = b;
        b = c;
    }
    cout << len << "\n";

    return 0;
}