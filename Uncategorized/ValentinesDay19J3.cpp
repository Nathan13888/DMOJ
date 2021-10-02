#include "bits/stdc++.h"
using namespace std;
// https://dmoj.ca/problem/valentines19j3

// loveee
// 3

// looxdvxdeee
// 6
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    unsigned long long L, O, V, E;
    L=O=V=E=0;
    string s;
    getline(cin, s);

    for (int i = (int)s.size()-1;i>=0;i--) {
        if (s[i]=='e') E++;
        else if (s[i]=='v') V+=E;
        else if (s[i]=='o') O+=V;
        else if (s[i]=='l') L+=O;
    }
    cout << L;

    return 0;
}