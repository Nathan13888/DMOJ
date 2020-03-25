#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string line;
    getline(cin, line);

    int i = 0;
    bool b = true;

    // cout << ((' ' == ' ') ? "yess" : "noo");
    // char c;
    // while (cin >> c)
    for (auto c : line)
    {
        // cout << c;
        if (c == ' ')
            i = i + 1;
        else if (c == 'F')
            b = false;
    }

    // cout << "counted: " << i;

    i = i % 2;

    // if odd # of nots --> change bool
    if (i == 1)
    {
        // cout << "changing signs";
        if (b)
            b = false;
        else
            b = true;
    }

    if (b)
        cout << "True";
    else
        cout << "False";
    return 0;
}
