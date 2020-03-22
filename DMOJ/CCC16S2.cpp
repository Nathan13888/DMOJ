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
    int total = 0;
    if (Q == 1)
        //Question 1 : what is the minimum total speed,
        sort(peg, peg + N);
    else
        //Question 2 : what is the maximum total speed,
        sort(peg, peg + N, greater<int>());

    for (int i = 0; i < N; i++)
        total += max(dmo[i], peg[i]);

    cout << total;

    return 0;
}