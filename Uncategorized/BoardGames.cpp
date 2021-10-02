#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    unsigned int N, M;
    cin >> N >> M;
    int moves = 0;

    while (N != M)
    {
        if (N < M)
        {
            while (N < M)
            {
                moves++;
                N *= 3;
            }
            continue;
        }
        moves++;
        if (N - 1 == M)
            N--;
        else if (N - 3 == M)
            N -= 3;
        else if (N % 2 == 0 && M - N / 2 <= 0)
            N /= 2;
        else if (N - 3 >= M)
            N -= 3;
        else
            N -= 12;
    }

    cout << moves;

    return 0;
}