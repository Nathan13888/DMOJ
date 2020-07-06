#include "bits/stdc++.h"
using namespace std;

bool compare(int i1, int i2)
{
    int j1 = i1 % 10, j2 = i2 % 10;
    if (j1 == j2)
        return i1 > i2;
    else
        return j1 < j2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    int ar[(int)1e5];

    for (int i = 0; i < N; i++)
        cin >> ar[i];

    sort(ar, ar + N, compare);

    for (int i = 0; i < N; i++)
        cout << ar[i] << " ";
    cout << "\n";

    return 0;
}