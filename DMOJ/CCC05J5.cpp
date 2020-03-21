#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string line;
    while (cin >> line && line != "X")
    {
        bool a = false, b = false, m = true;
        char last = '\0';
        for (const char c : line)
        {
            if (c != 'A' && c != 'B' && c != 'N' && c != 'S')
            {
                m = false;
                break;
            }
            if (c == 'A')
            {
                a = true;
            }

            if (last == 'B')
            {
                if (!a)
                {
                    m = false;
                    break;
                }
                b = true;
            }
            if (b)
            {
                if (c == 'S')
                {
                    a = b = false;
                }
                else if (!a)
                {
                    m = false;
                    break;
                }
            }
            if (c == 'N' && !a)
            {
                m = false;
                break;
            }

            last = c;
        }
        if (!b && m)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}