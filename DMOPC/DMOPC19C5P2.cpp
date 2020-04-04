#include <bits/stdc++.h>
using namespace std;

// TODO: dmoj.ca/problem/dmopc19c5p2/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, H, ply, opp;
    cin >> N >> H;
    pair<char, int> data[N];
    ply = opp = H;
    for (int i = 0; i < N; i++)
    {
        cin >> data[i * 2].first >> data[i * 2].second;
    }
    for (int i = 0; i < N; i++)
    {
        cin >> data[i * 2 + 1].first >> data[i * 2 + 1].second;
    }
    int i = 0;
    for (auto a : data)
    {
        if (a.first == 'A' && (data[i - 1].second != 'D' || i - 1 < 0))
            opp -= a.second;
        else if (data[i + 1].first == 'D' || i + 1 >= N)
            ply -= a.second;

        if (ply < 0)
        {
            cout << "DEFEAT";
            return 0;
        }
        if (opp < 0)
        {
            cout << "VICTORY";
            return 0;
        }
        swap(ply, opp);
        i++;
    }
    cout << "TIE";

    return 0;
}
