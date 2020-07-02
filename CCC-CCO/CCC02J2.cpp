#include "bits/stdc++.h"
using namespace std;

const string VOWELS = "aeiouy";

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string line;
    while ((cin >> line) && line != "quit!")
    {
        bool c1 = line.size() > 4;
        unsigned long long test = VOWELS.find(line[line.size() - 3]);
        bool c2 = test == string::npos;
        bool c3 = line.substr(line.size() - 2) == "or";
        // cout << c1 << test << c2 << c3;
        if (c1 && c2 && c3)
            line = line.substr(0, line.size() - 2) + "our";
        cout << line << "\n";
    }

    return 0;
}