#include "bits/stdc++.h"
//#pragma GCC optimize("Ofast")
using namespace std;

string W;

bool **done, **ans;

bool **newMat(int n, int m)
{
    bool **p = new bool *[m];
    for (int i = 0; i < m; i++)
    {
        p[i] = new bool[n]{}; //{} initializes all elements to false
    }
    return p;
}

bool isSolvable(int s, int e)
{
    if (!done[s][e])
    {
        bool result = 69; // just to get rid of errors
        if (s == e)
            result = true;
        else if (e - s == 1)
            result = false;
        else
        {
            result = false;
            if (W[s] == W[e - 1])
            {
                int i = s;
                while (i < e && W[s] == W[i])
                    i++;

                int j = e;
                while (j > i && W[e - 1] == W[j - 1])
                    j--;
                result |= isSolvable(i, j);
            }
            for (int i = s + 1; i < e; i++)
                result |= isSolvable(s, i) && isSolvable(i, e);

            for (int i = s + 1; i < e; i++)
                if (W[i - 1] == W[e - 1])
                    result |= isSolvable(s, i) && isSolvable(i, e - 1);
        }
        ans[s][e] = result;
        done[s][e] = true;
    }
    return ans[s][e];
}

bool solve()
{
    const int n = W.size();
    done = newMat(n + 1, n + 1);
    ans = newMat(n + 1, n + 1);
    return isSolvable(0, n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> W;
            cout << (solve() ? "S" : "U");
            delete(*done);
            delete(*ans);
        }
        cout << "\n";
    }

    return 0;
}
/**
HRROORRAARAH ALBINO WATERLOO MALAYYALAM A
SJDFDSKFSDSDKLNKLNKLASNDKKKKKKKKKKKKKKKKKKKKKSSSSSSJDFDSKFSDSDKLNKLNKLASNDKKKKKKKKKKKKKKKKKKKKKSSSSS EDDFFEFDEFFEFFEFEEFEDEFFDDFEDEEFFEFFDEFEFEDEFFDDDDFEEEFFFEEEDDDDFDFDDFFFEFEDFFFEDFDFEDDEFFFDFDEFEEFEDEEDEFDFEDDFFEDFFDDFDDFFDEFFDFDEEFEDEFFEDDEDFEFFFD COOL GRASS LOOL
UNSOLVABLE UNSOLVABLE UNSOLVABLE UNSOLVABLE EFFDEEFFDDFFFDEFFFEFDDDFEDFEFEDEEFFDFEDFFDDEDFDDFFFDDDDFDDDDFDFDDEEFFFDFFEEDDDEFDEDEFEDDFEEEFEDEFFDDFEDFFFFDDEEEEEFDDEEFDEFDFDEFFFDEEDDEDDDEFEFDDFEEDD
H A HH EFDDDEDDEDFFEEDDFFDFDDEDEEFEDFEEFFFDFFDEDEEFFEDFEDFFEDFEEFFFFFDFFDDEDEFEFFDFDEEEFEEEFEFEEFDDEEEFFEDDDEEDDDDDEFDEEFDDEDFDFDDFFEEEDFFEDDFEEFDDEDFDDFFEFF AAAAAAAAAAAAAAAAAAAAAAAAHAAAAAAAAAAAAAAAAAAAAAAAAA
LOL EDFFDDDDFEEDFFEFDEDFEEFFDDEFEDDFDDDEEDFDFEEFDDFEEFEDDDDFDDEFDEFEEFFDDFEDDDDEDDDFDFDFFDEEEDDEFDFEDFDEFEEFFFEDDEFEDDDDFFEDFFFFDFEDEEEDDEDDEEEFDEDEDEEFED TROOLLOLLOOLOLLOOLLOOLLLOLLOOOLOOOLLLLOLLOOOLLOORTTROOLLOLLOOLOLLOOLLOOLLLOLLOOOLOOOLLLLOLLOOOLLOORT LOL ROFLCOPTER
*/