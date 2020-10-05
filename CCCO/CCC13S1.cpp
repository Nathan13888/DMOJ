#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int Y;
    cin >> Y;

    while (true)
    {
        Y++;
        string s = to_string(Y);
        // cout << s << "\n";
        bool b = false;
        for (int i = 0; i < (int)s.size(); i++)
        {
            for (int j = 0; j < (int)s.size(); j++)
            {
                // cout << s[i] << " - " << s[j] << "\n";
                if (i != j && s[i] == s[j])
                {
                    b = true;
                    break;
                }
            }
        }
        if (!b)
        {
            cout << Y << "\n";
            break;
        }
    }

    return 0;
}