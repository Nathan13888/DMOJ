#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int C;

    while (cin >> C && C)
    {
        // width, height
        int w, h;

        for (int x = 1; x * x <= C; x++)
            if (C % x == 0)
                w = x;
        h = C / w;

        cout << "Minimum perimeter is " << 2 * (w + h) << " with dimensions " << w << " x " << h << "\n";
    }

    return 0;
}