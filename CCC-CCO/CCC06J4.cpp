#include "bits/stdc++.h"
using namespace std;

vector<set<int>> rules(10);
vector<int> res, tmp(10);

inline void a(int x, int y)
{
    rules[y].insert(x);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    a(1, 7);
    a(1, 4);
    a(2, 1);
    a(3, 4);
    a(3, 5);
    int x, y;
    do
    {
        cin >> x >> y;
        a(x, y);
    } while (x != 0 && y != 0);

    while (res.size() < 7)
    {
        bool b = false;
        for (int i = 1; i <= 7; i++)
            if (rules[i].empty() && !tmp[i])
            {
                tmp[i] = b = true;
                for (int y = 1; y <= 7; y++)
                {
                    auto it = rules[y].find(i);
                    if (it != rules[y].end())
                        rules[y].erase(it);
                }
                res.push_back(i);
                break;
            }
        if (!b)
        {
            cout << "Cannot complete these tasks. Going to bed.";
            return 0;
        }
    }
    for (auto &x : res)
        cout << x << " ";
    return 0;
}