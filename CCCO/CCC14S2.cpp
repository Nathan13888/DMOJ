#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    vector<string> A(N), B(N);
    bool b = true;
    map<string, string> f;

    for (auto &x : A)
        cin >> x;
    for (auto &x : B)
        cin >> x;

    for (int i = 0; i < N; i++)
    {
        if (A[i] == B[i])
        {
            b = false;
            break;
        }
        if (f[A[i]] == "")
            f[A[i]] = B[i];
        else if (f[A[i]] != B[i])
        {
            b = false;
            break;
        }

        if (f[B[i]] == "")
            f[B[i]] = A[i];
        else if (f[B[i]] != A[i])
        {
            b = false;
            break;
        }
    }

    cout << (b ? "good\n" : "bad\n");

    return 0;
}