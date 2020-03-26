#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int I, S;
    long before = 0;

    cin >> I;

    for (int i = 0; i < I; i++)
    {
        int tmp;
        cin >> tmp;
        before += tmp;
    }
    // before = before / I;
    cin >> S;
    for (int i = 1; i <= S; i++)
    {
        int tmp;
        cin >> tmp;
        // cout << tmp;
        before += tmp;
        float d = before / (double)(I + i);
        printf("%.3f\n", d);
    }

    return 0;
}