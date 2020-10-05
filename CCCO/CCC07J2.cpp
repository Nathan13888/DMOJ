#include "bits/stdc++.h"
using namespace std;

map<string, string> dict{
    {"CU", "see you"},
    {":-)", "I'm happy"},
    {":-(", "I'm unhappy"},
    {";-)", "wink"},
    {":-P", "stick out my tongue"},
    {"(~.~)", "sleepy"},
    {"TA", "totally awesome"},
    {"CCC", "Canadian Computing Competition"},
    {"CUZ", "because"},
    {"TY", "thank-you"},
    {"YW", "you're welcome"},
    {"TTYL", "talk to you later"},
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while (true)
    {
        string line;
        getline(cin, line);
        if (dict.find(line) != dict.end())
            cout << dict[line] << "\n";
        else
            cout << line << "\n";
        if (line == "TTYL")
            break;
    }

    return 0;
}