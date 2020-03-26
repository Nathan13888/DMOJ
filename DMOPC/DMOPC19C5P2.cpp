#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, H, chrl, enme;
    cin >> N >> H;
    char m[N];
    int d[N];
    chrl = enme = H;
    for (int i = 0; i < N; i++)
    {
        cin >> m[i * 2] >> d[i * 2];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> m[i * 2 + 1] >> d[i * 2 + 1];
    }
    for (int i = 0; i < N; i++)
    {
        if (m[i] == 'A' && (m[i - 1] != 'D' || m - 1 > 0))
            enme -= d[i];
        else if (m[i + 1] == 'D' || i + 1 >= N)
            chrl -= d[i];

        if (chrl < 0)
        {
            cout << "DEFEAT";
            return 0;
        }
        if (enme < 0)
        {
            cout << "VICTORY";
            return 0;
        }
        swap(chrl, enme);
    }
    cout << "TIE";

    return 0;
}