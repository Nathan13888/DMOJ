#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // Key, Line, Final Answer
    string key, lin, fin;
    getline(cin, key);
    getline(cin, lin);

    //remove all not letter chars
    for (ull i = 0; i < lin.length(); i++)
        if ('A' <= lin[i] && lin[i] <= 'Z')
            fin += lin[i];

    // convert chars: shift
    for (ull i = 0; i < fin.length(); i++)
        cout << (char)((fin[i] + key[i % key.length()] - 'A' - 'A') % 26 + 'A');

    cout << "\n";

    return 0;
}
