#include "bits/stdc++.h"
using namespace std;

// https://dmoj.ca/problem/mockecoo14p1https://dmoj.ca/problem/mockecoo14p1
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int cases = 5;

    while (cases--)
    {
        int N;
        cin >> N;

        vector<string> lines = {
            // 12 lines here index 0-11
            "          |",
            "       \  |  /",
            "        \ | /",
            "         \|/",
            "       XXXXXXX",
            "      X       X",
            "     X  O   O  X",
            "    X     V     X",
            "W   X  X     X  X",
            " \   X  XXXXX  X",
            "  \   X       X",
            "   \   XXXXXXX",
            "    \ X       X---",
            "     X    O    X  \\",
            "    X           X  \\",
            "     XXXXXXXXXXX    \\",
        };

        if (N == 1)
        {
                lines.push_back("      OOOO OOOO      M");
                lines.push_back("      OOOO OOOO");
        }
        else
        {
            int ln = 0, gap=(N-2)*2-1;
            int h,w;

            while (N--)
            {
                h++;
                w++;
            }
            // Legs
        }
        if (cases != 1)
            cout << "\n";
    }

    return 0;
}