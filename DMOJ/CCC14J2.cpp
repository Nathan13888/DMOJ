#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int v;
    cin >> v;

    unsigned int a = 0, b = 0;
    char c;
    for (int i = 0; i < v; i++)
    {
        cin >> c;
        if (c == 'A')
            a++;
        else if (c == 'B')
            b++;
    }

    if (a > b)
        cout << "A";
    else if (b > a)
        cout << "B";
    else if (a == b)
        cout << "Tie";

    return 0;
}