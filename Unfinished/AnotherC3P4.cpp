#include <bits/stdc++.h>
using namespace std;

// TODO: suffix tree thingy ma jiggy
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, Q;
    cin >> N >> Q;

    int arr[N];

    while (Q--)
    {
        int type;
        cin >> type;
        if (!--type)
        { // INCREMENT
            int l, r, a;
            cin >> l >> r >> a;
            for (int i = l; i <= r; i++)
            {
                arr[i] += a * (i - l + 1);
            }
        }
        else
        { // SUM
            int l, r, sum = 0;
            cin >> l >> r;
            for (int i = l; i <= r; i++)
            {
                sum += arr[i];
            }
            cout << sum << "\n";
        }
    }

    return 0;
}