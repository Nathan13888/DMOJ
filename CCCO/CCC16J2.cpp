#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int square[4][4]; // row, column

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> square[i][j];
        }
    }

    vector<int> row(4), col(4);

    for (int i = 0; i < 4; i++)
        row[i] = square[i][0] + square[i][1] + square[i][2] + square[i][3];

    for (int j = 0; j < 4; j++)
        col[j] = square[0][j] + square[1][j] + square[2][j] + square[3][j];

    if (adjacent_find(row.begin(), row.end(), not_equal_to<int>()) == row.end() &&
        adjacent_find(col.begin(), col.end(), not_equal_to<int>()) == col.end())
        cout << "magic\n";
    else
        cout << "not magic\n";

    return 0;
}