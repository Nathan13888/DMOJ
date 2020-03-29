#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int S, M;
    cin >> S >> M;
    string org;
    getline(cin, org);
    getline(cin, org);
    bitset<256> bs;
    for (int i = 0; i < org.size(); i++)
    {
    }

    while (M--)
    {
        int l, r;
        cin >> l >> r;
        for (int j = l; j <= r; j++)
        {
            bs[org.size() - j] = 1;
        }
        cout << bs.to_ulong();
    }

    return 0;
}