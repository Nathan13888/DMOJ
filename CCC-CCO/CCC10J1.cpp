#include <bits/stdc++.h>
using namespace std;

// Actually doesn't make sense: https://dmoj.ca/problem/ccc10j1
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n <= 5)
        cout << n / 2 + 1;
    else if (n <= 7)
        cout << 9 - n;
    else
        cout << 10 - n;

    return 0;
}