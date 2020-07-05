#include "bits/stdc++.h"
using namespace std;

typedef unsigned long long ull;

int N;
ull T;
string in;
// vector<int> OLD(100001), NEW(100001);
int OLD[100001], NEW[100001];

// C_k[i]=C[i−k]⊕C[i+k]
void calc(int k)
{
    int p = (((ull)1) << k) % N;
    int p2 = (N - p) % N;
    for (int i = 0; i < N; i++)
        NEW[i] = OLD[(i + p) % N] ^ OLD[(i + p2) % N];
    // OLD.swap(NEW);
    for (int i = 0; i < N; i++)
        OLD[i] = NEW[i];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> T >> in;

    // convert into 1s and 0s
    for (int i = 0; i < N; i++)
        OLD[i] = in[i] - '0';
    // check for 1s
    for (int i = 49; i >= 0; i--)
        if ((T >> i) & 1)
            calc(i);
    // output answer
    for (int i = 0; i < N; i++)
        cout << OLD[i];
}