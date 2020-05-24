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

string getGap(int width)
{
    string s;
    while (width--)
        s += " ";

    return s;
}

string getXs(int width)
{
    string s;
    while (width--)
        s += "X";

    return s;
}

void gen(int N)
{
    int h = 4, w = 5, curW = 10;

    // do one less than N--
    while (--N)
    {
        // add spaces to the left side of all the previous lines
        if (w > curW)
            for (long unsigned int i = 0; i < lines.size(); i++)
            {
                string s = "";
                for (int j = 0; j < curW - w; j++)
                    s += " ";
                lines[i] = s + lines[i];
            }
        curW = max(curW, w + h - 1);

        int gap = curW - w;
        // add torso
        for (int x = 0; x < h; x++)
        {
            string tmp;
            // add gap
            tmp += getGap(gap);
            tmp += "X";
            // add gap 2
            tmp += getGap(w + x - 1);
            // add button or not
            if (x == 0 || x == h - 1)
                tmp += " ";
            else
                tmp += "0";
            // add gap 3
            tmp += getGap(w + x - 1);
            tmp += "X";
            lines.push_back(tmp);
        }
        // S JOINT
        string joint;
        for (int i = 0; i < gap + 1; i++)
            joint += " ";
        for (int i = 0; i < (w + 1) * 2 + 1; i++)
            joint += "X";

        lines.push_back(joint);
        // E JOINT

        h++;
        w += 2;
    }

    // Add the right hand to index 16
    lines[16] += "     M";

    // S LEGS
    string gap2 = getGap(w - 1);
    lines.push_back(gap2 + "OOOO OOOO");
    lines.push_back(gap2 + "OOOO OOOO");
    // E LEGS
}

void run(int N)
{
    if (N == 1)
    {
        lines.push_back("      OOOO OOOO      M");
        lines.push_back("      OOOO OOOO");
    }
    else
        gen(N);

    // output lines
    for (auto s : lines)
        cout << s << "\n";

    // RESET vector "lines"
    lines = model;
}

void runTest()
{
    vector<int> Ns = {1, 3, 5};

    long unsigned int count = 0;

    for (int N : Ns)
    {
        run(N);
        if (++count != Ns.size())
            cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    model = lines;

    // TEST
    runTest();
    return 0;
    //

    int cases = 5;
    int N;

    while (cases--)
    {
        cin >> N;
        run(N);
        if (cases != 1)
            cout << "\n";
    }

    return 0;
}