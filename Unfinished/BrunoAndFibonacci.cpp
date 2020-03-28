#include <bits/stdc++.h>
using namespace std;

bool isFib(int n)
{
    // Fib Nums from 0 to 500
    int ok[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377};

    for (int i : ok)
    {
        if (i == n)
            return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    char c;
    for (int i = 1; i <= N; i++)
    {
        cin >> c;
        if (c == 'A')
        {
            if (!isFib(i))
            {
                cout << "Bruno, GO TO SLEEP";
                return 0;
            }
        }
    }
    cout << "That's quite the observation!";
    return 0;
}