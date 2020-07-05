#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int lines;
    cin >> lines;
    string s;
    int Ss = 0, Ts = 0;
    for (int i = 0; i < lines; i++)
    {
        getline(cin, s);
        for (char c : s)
        {
            if (c == 's' || c == 'S')
                Ss++;
            else if (c == 't' || c == 'T')
                Ts++;
        }
    }

    if (Ts < Ss)
        cout << "French";
    else
        cout << "English";

    return 0;
}