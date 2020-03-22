#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;

    getline(cin, s);

    bool valid = true;
    for (char c : s)
    {
        char cs[] = {'I', 'O', 'S', 'H', 'Z', 'X', 'N'};
        bool keep = false;
        for (int i = 0; i < 7; i++)
        {
            if (c == cs[i])
            {
                keep = true;
                break;
            }
        }
        if (!keep)
        {
            valid = false;
            break;
        }
    }

    if (valid)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}