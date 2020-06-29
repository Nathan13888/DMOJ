#include "bits/stdc++.h"
using namespace std;

// bruh, can't believe they are discriminating c++
// https://dmoj.ca/problem/alphabetscore
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int score = 0;

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        score += (s[i] - 'a' + 1);
    }

    cout << score;

    return 0;
}