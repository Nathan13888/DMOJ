#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void chk(char a, char b, char c, char d, char e, char f)
{
    if (c == 'R' && d == 'R')
    {
        if (a == 'R' && b == 'R')
            cnt++;
        if (b == 'R' && e == 'R')
            cnt++;
        if (e == 'R' && f == 'R')
            cnt++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // chk('R', 'R', 'R', 'R', 'R', 'R');
    // cout << cnt;

    // return 0;

    //plane, line, char
    char dat[6][6][6];
    for (int p = 0; p < 6; p++)
    {
        for (int l = 0; l < 6; l++)
        {
            for (int c = 0; c < 6; c++)
            {
                cin >> dat[p][l][c];
            }
        }
    }

    //LEFT-RIGHT
    for (int p = 0; p < 6; p++)
    {
        for (int l = 0; l < 6; l++)
        {
            chk(dat[p][l][0], dat[p][l][1], dat[p][l][2], dat[p][l][3], dat[p][l][4], dat[p][l][5]);
        }
    }
    // FRONT-BACK
    for (int p = 0; p < 6; p++)
    {
        for (int l = 0; l < 6; l++)
        {
            chk(dat[0][p][l], dat[1][p][l], dat[2][p][l], dat[3][p][l], dat[4][p][l], dat[5][p][l]);
        }
    }
    // UP-DOWN
    for (int p = 0; p < 6; p++)
    {
        for (int l = 0; l < 6; l++)
        {
            chk(dat[p][0][l], dat[p][1][l], dat[p][2][l], dat[p][3][l], dat[p][4][l], dat[p][5][l]);
        }
    }

    if (cnt != 0)
        cout << cnt;
    else
        cout << "lost";

    return 0;
}