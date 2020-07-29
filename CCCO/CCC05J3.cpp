#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<pair<string, string>> v;

    string a, b;
    while (true)
    {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
        if (b == "SCHOOL")
            break;
    }

    reverse(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        auto x = v[i];
        cout << "Turn ";
        if (x.first == "L")
            cout << "RIGHT";
        else
            cout << "LEFT";
        if (i + 1 == v.size())
            cout << " into your HOME.";
        else
            cout << " onto " << v[i + 1].second << " street.";
        cout << "\n";
    }

    return 0;
}