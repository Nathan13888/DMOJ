#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    int sum = N;
    for (int i = 1; i <= K; i++)
    {
        sum += N * pow(10, i);
    }
    cout << sum << "\n";

    return 0;
}