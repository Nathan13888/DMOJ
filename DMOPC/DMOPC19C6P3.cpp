#include <bits/stdc++.h>
using namespace std;

void printBin(string s)
{
    cout << s << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int S, M;
    cin >> S >> M;
    // vector<char> org(S);
    // for (int i = 0; i < S; i++)
    // {
    //     cin >> org[i];
    // }
    // string org;
    getline(cin, org);
    getline(cin, org);

    for (int i = 0; i < M; i++)
    {
        int l, r;
        cin >> l >> r;
        // vector<char> dup(S);
        // copy(begin(org), end(org), begin(dup));
        // string dup = org;
        for (int j = l; j <= r; j++)
        {
            org[j - 1] = 1;
        }
        printBin(org);
    }

    return 0;
}