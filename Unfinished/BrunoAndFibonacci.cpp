#include <bits/stdc++.h>
using namespace std;

int curFib = 0;
int n_2, n_1 = 0, n = 1;

int fib(int n)
{
    // * doesn't work if n is greater than curFib
    for (int k = 1; k <= n; k++)
    {
        n_2 = n_1;
        n_1 = n;
        n = n_2 + n_1;
    }
    return n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        char c;
        cin >> c;
        if (c == 'A')
        {
        }
    }

    return 0;
}