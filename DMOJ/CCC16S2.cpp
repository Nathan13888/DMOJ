#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Q, N;
    cin >> Q >> N;
    int dmo[N], peg[N];
    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        dmo[i] = tmp;
    }
    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        peg[i] = tmp;
    }
    sort(dmo, dmo + N);
    sort(peg, peg + N);
    int r = N % 2, total = 0;
    if (Q == 1)
    { // TODO-fix: need to filter the mid section of
        //Question 1 : what is the minimum total speed,
        for (int i = 0; i < (N - r) / 2; i++)
        {
            total += dmo[i];
        }
        for (int i = 0; i < (N - r) / 2; i++)
        {
            total += peg[i];
        }
        if (r == 1)
            total += min(dmo[N / 2 - 1], peg[N / 2 - 1]);
    }
    else
    { //Question 2 : what is the maximum total speed,
        for (int i = 0; i < (N - r) / 2; i++)
        {
            total += dmo[N - i - 1];
        }
        for (int i = 0; i < (N - r) / 2; i++)
        {
            total += peg[N - i - 1];
        }
        if (r == 1)
            total += max(dmo[N / 2 - 1], peg[N / 2 - 1]);
    }

    return 0;
}