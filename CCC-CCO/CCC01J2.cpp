#include "bits/stdc++.h"
using namespace std;

int main()
{
    int X, M;

    scanf("%i", &X);
    scanf("%i", &M);

    for (int n = 1; n < M; n++)
    {
        if ((X * n) % M == 1)
        {
            printf("%i", n);
            return 0;
        }
    }
    puts("No such integer exists.");
    return 0;
}