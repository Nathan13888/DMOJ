#include "bits/stdc++.h"
using namespace std;
// https://dmoj.ca/problem/acc4p8

long long D, M, O, J;

long long f(string s) {
    D=M=O=J=0;

    for (int i = (int)s.size()-1;i>=0;i--) {
        if (s[i]=='J') J++;
        else if (s[i]=='O') O+=J;
        else if (s[i]=='M') M+=O;
        else if (s[i]=='D') D+=M;
    }

    return D;
}
