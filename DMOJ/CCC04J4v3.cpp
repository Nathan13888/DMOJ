#include <bits/stdc++.h>
using namespace std;

// version 3 !
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);

    // Key, Line --> Final Answer
    string key, lin;
    // getline(cin, key);
    // getline(cin, lin);
    // TODO: I basically gave up improving this... getchar_unlocked() seems promising. Didn't try yet. Scanf kinda sucks ngl...
    scanf("\n", key);
    scanf("\n", lin);

    int lens = 0;
    for (int i = 0; i < lin.length(); i++)
    {
        if ('A' <= lin[i] && lin[i] <= 'Z')
        {
            //- 'A' - 'A' = -65-65 = -130
            int tmp = lin[i] + key[lens % key.length()] - 130;
            if (tmp > 25)
                tmp -= 26;
            tmp += 65;
            printf("%c", tmp);
            lens++;
        }
    }

    return 0;
}
