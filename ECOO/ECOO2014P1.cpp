#include "bits/stdc++.h"
using namespace std;

// https://dmoj.ca/problem/mockecoo14p1https://dmoj.ca/problem/mockecoo14p1

vector<string> lines = {
    "          |",
    "       \\  |  /",
    "        \\ | /",
    "         \\|/",
    "       XXXXXXX",
    "      X       X",
    "     X  O   O  X",
    "    X     V     X",
    "W   X  X     X  X",
    " \\   X  XXXXX  X",
    "  \\   X       X",
    "   \\   XXXXXXX",
    "    \\ X       X---",
    "     X    O    X  \\",
    "    X           X  \\",
    "     XXXXXXXXXXX    \\",
};

vector<string> model;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    model = lines;

    int cases = 5;

    while (cases--)
    {
        int N;
        cin >> N;

        if (N == 1)
        {
            lines.push_back("      OOOO OOOO      M");
            lines.push_back("      OOOO OOOO");
        }
        else
        {
            int h = 4, w = 6, curW = 10;

            // do one less than N--
            while (--N)
            {
                if (w > curW)
                { // add 2 spaces to the left side of all the previous lines
                    for (long unsigned int i = 0; i < lines.size(); i++)
                    {
                        for (int j = 0; j < w - curW; j++)
                            lines[0] = " " + lines[0];
                    }
                    curW = max(curW, w);
                }

                int gap = curW - w;
                // add torso
                for (int x = 0; x < h; x++)
                {
                    string tmp;
                    // add gap
                    for (int i = x; i < gap; i++)
                    {
                        tmp += " ";
                    }
                    tmp += "X";
                    // add gap 2
                    for (int i = 0; i < w + x - 1; i++)
                    {
                        tmp += " ";
                    }
                    // add button or not
                    if (x == 0 || x == h - 1)
                        tmp += " ";
                    else
                        tmp += "0";
                    // add gap 3
                    for (int i = 0; i < w + x - 1; i++)
                    {
                        tmp += " ";
                    }
                    tmp += "X";
                    lines.push_back(tmp);
                }
                // add joint
                string joint;
                // add gap
                for (int i = 0; i < gap + 1; i++)
                {
                    joint += " ";
                }
                // add Xs
                for (int i = 0; i < (curW - 1) * 2 + 1; i++)
                {
                    joint += "X";
                }

                lines.push_back(joint);

                h++;
                w++;
            }
            // Add the right hand to index 16
            lines[16] += "     M";
            // Legs
            int cnt = w - 4;
            string gap2 = "";
            while (cnt--)
                gap2 += " ";
            lines.push_back(gap2 + "OOOO OOOO");
            lines.push_back(gap2 + "OOOO OOOO");
        }
        // output lines
        for (auto s : lines)
            cout << s << "\n";

        if (cases != 1)
        {
            cout << "\n";
            // RESET vector "lines"
            lines = model;
        }
    }

    return 0;
}