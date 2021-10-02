#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int ans;
    cin >> ans; // start with the first value
    while (true)
    {
        char oper;
        cin >> oper;
        if (oper == '=')
            break;
        int num;
        cin >> num;
        if (oper == 'P')
            ans += num;
        else // oper == 'M'
            ans -= num;
    }

    cout << ans << "\n";

    return 0;
}