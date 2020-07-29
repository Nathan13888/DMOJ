#include "bits/stdc++.h"
using namespace std;

bool isLob(string s)
{
    return (s == "lob");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    string a, b;
    bool lobbed = false, poss = true;
    cin >> N;

    for (int i = 0; i < N / 2; i++)
    {
        cin >> a >> b;

        if (isLob(a) || isLob(b))
        {
            lobbed = true;
        }
        if (isLob(a))
        {
            if (!isLob(b))
                poss = false;
        }
    }

    if (!lobbed)
    {
        cout << "Not enough information";
    }
    else if (lobbed && poss)
    {
        cout << "Possible Bruno";
    }
    else
    {
        cout << "BruNO";
    }

    return 0;
}