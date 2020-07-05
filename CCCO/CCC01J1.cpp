#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int H;
    cin >> H;

    // string lines[(H - 1) / 2];
    string lines[69];

    for (int i = 0; i < (H + 1) / 2; i++)
    {
        string tmp = "";
        tmp += "*";
        for (int j = 0; j < i; j++)
            tmp += "**";
        for (int j = 0; j < (H - 1) / 2 - i; j++)
            tmp += "  ";
        tmp += string(tmp.rbegin(), tmp.rend());
        lines[i] = tmp;
        cout << lines[i] << "\n";
    }

    for (int i = (H - 3) / 2; i >= 0; i--)
        cout << lines[i] << "\n";

    return 0;
}