#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int N;
    int count;
    scanf("%i", &N);

    while (N--)
    {
        int i;
        scanf("%i", &i);
        if (i > 0)
            count++;
    }

    printf("%i", count);
    return 0;
}