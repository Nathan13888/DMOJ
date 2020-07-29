#include "bits/stdc++.h"
using namespace std;

bool isRSA(int N)
{
    int div = 2; // 1 and itself
    for (int i = 2; i < N; i++)
        if (N % i == 0)
            div++;
    if (div == 4)
        return 1;
    else
        return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, count = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (isRSA(i))
            count++;
    }

    cout << "The number of RSA numbers between " << a << " and " << b << " is " << count << "\n";

    return 0;
}