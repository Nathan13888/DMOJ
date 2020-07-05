#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, a, b;

    vector<int> di(20);

    while (cin >> n && n)
    {
        cin >> a;
        if (n == 1)
            cout << "0\n";
        else
        {
            for (int i = 1; i < n; i++)
            {
                cin >> b;
                di[i] = b - a;
                a = b;
            }
            int pos, len = 1;
            do
            {
                pos = 1;
                while (pos + len < n && di[pos] == di[pos + len])
                    pos++;
                if (pos + len >= n)
                    break;
                len++;
            } while (true);
            cout << len << "\n";
        }
    }

    return 0;
}