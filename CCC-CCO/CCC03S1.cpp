#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c = 1;
    while (true)
    {
        int m;
        cin >> m;
        if (m == 0)
        {
            cout << "You Quit!";
            break;
        }
        if (c + m <= 100)
            c += m;

        // Snakes and Ladders
        int starts[6] = {54, 90, 99, 9, 40, 67};
        int finish[6] = {19, 48, 77, 34, 64, 86};
        for (int i = 0; i < 6; i++)
        {
            if (starts[i] == c)
            {
                c = finish[i];
            }
        }

        cout << "You are now on square " << c << "\n";
        if (c == 100)
        {
            cout << "You Win!";
            break;
        }
    }
    return 0;
}