#include "bits/stdc++.h"
using namespace std;

vector<int> people;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int K, M;
    cin >> K >> M;

    for (int i = 1; i <= K; i++)
        people.push_back(i);

    while (M--)
    {
        int r;
        cin >> r;
        for (int i = (int)people.size(); i >= 1; i--)
        {
            if (!(i % r))
                people.erase(people.begin() + i - 1);
        }
    }

    for (int i = 0; i < (int)people.size(); i++)
        cout << people[i] << "\n";

    return 0;
}