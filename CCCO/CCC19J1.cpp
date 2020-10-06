#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c, A, B, C;
    cin >> a >> b >> c >> A >> B >> C;

    int apples = a * 3 + b * 2 + c;
    int bananas = A * 3 + B * 2 + C;

    if (apples > bananas)
        puts("A");
    else if (apples < bananas)
        puts("B");
    else
        puts("T");

    return 0;
}