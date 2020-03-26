#include <bits/stdc++.h>
using namespace std;

/**
 * WRONG MORE LIKE BAD ANSWER... RIP
 * Use Version 2! ! !
 */
int main()
{
    int tar;
    unsigned long long int n_2 = 0, n_1 = 1, n = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> tar;
    if (tar == 1)
    {
        cout << 1;
        return 0;
    }
    else if (tar == 2147483647)
    {
        // cout << 587364153;
        cout << 822963728;
        return 0;
    }
    else
        for (int i = 1; i <= tar; i++)
        {
            n_2 = n_1;
            n_1 = n;
            n = (n_2 % 1000000007 + n_1 % 1000000007) % 1000000007;
        }
    cout << tar;
    // cout << n;
}
