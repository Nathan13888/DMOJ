#include "bits/stdc++.h"
using namespace std;

// TODO: https://dmoj.ca/problem/dwite07c3p2
void parse(string s) {
    bool cap = false;
    string res = "", cache = "";
    for (int i = 0; i<(int)s.size();i++) {
        char c = s[i];
        char n = s[i+1];
        if (c=='\''||c=='\"') {
            cap = !cap;
            continue;
        }
        if (!cap)
            if (c=='/') {
                if (n=='/'||n=='*')
                {
                    cap = true;
                }
                i++;
                continue;
            }
        if (c=='*'&&n=='/') {
            i++;
            cap = false;
            continue;
        }
        if (cap)
            cache+=c;
    }
    cout<<res<< "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int C = 5;
    while (C--) {
        string s;
        getline(cin, s);
        parse(s);
    }

    return 0;
}