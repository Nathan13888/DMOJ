#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int s, d, len = 1;

    cin >> s >> d;

    cout << "Sun Mon Tue Wed Thr Fri Sat"
         << "\n";

    for (int i = 0; i < s - 1; i++)
    {
        cout << "    ";
        len++;
    }

    for (int i = 1; i <= d; i++)
    {
        cout << (i < 10 ? "  " : " ") << i;

        if (i != d)
            cout << ((len % 7 == 0) ? "\n" : " ");

        len++;
    }

    cout << "\n";

    return 0;
}