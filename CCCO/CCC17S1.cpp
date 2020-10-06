#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, sA = 0, sB = 0, ind = -1;
    cin >> N;

    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    for (int i = 0; i < N; i++)
        cin >> B[i];

    for (int i = 0; i < N; i++)
    {
        sA += A[i];
        sB += B[i];
        if (sA == sB)
            ind = i;
    }

    if (ind == -1)
        cout << "0\n";
    else
        cout << ind + 1 << "\n";

    return 0;
}