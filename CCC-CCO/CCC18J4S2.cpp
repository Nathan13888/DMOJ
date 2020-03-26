#include <bits/stdc++.h>
using namespace std;

// TODO: finish
// https://dmoj.ca/problem/ccc18s2/editorial
// https://dmoj.ca/problem/ccc18s2
// https://github.com/Ninjaclasher/Competitive-Programming/blob/master/CCC/ccc18s2.cpp
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int gr[n][n];
    for (int i = 0; i < n; i++) //y
    {
        for (int j = 0; j < n; j++) //x
        {
            cin >> gr[j][i];
        }
    }

    if (gr[0][0] < gr[1][0]) //0
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << gr[j][i] << " ";
            }
            cout << "\n";
        }
    }
    else if (gr[0][0] > gr[1][0]) //180
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << gr[i][n - j - 1] << " ";
            }
            cout << "\n";
        }
    }
    else if (gr[0][0] < gr[0][1]) //90
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << gr[n - i - 1][j];
            }
            cout << "\n";
        }
    }
    else //270
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << gr[n - j - 1][n - i - 1] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}