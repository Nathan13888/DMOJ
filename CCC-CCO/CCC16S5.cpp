#include "bits/stdc++.h"
using namespace std;

typedef unsigned long long ull;

int N;
ull T;
string in;
vector<int> OLD(100001), NEW(100001);

void calc(int k)
{
    int p = (((ull)1) << k) % N;
    int p2 = (N - p) % N;
    for (int i = 0; i < N; i++)
        NEW[i] = OLD[(i + p) % N] ^ OLD[(i + p2) % N];
    OLD = NEW;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> T >> in;

    for (int i = 0; i < N; i++)
        OLD[i] = in[i] - '0';

    for (int i = 49; i >= 0; i--)
        if ((T >> i) & 1)
            calc(i);
    for (int i = 0; i < N; i++)
        cout << OLD[i];

    cout << "\n";

    return 0;
}