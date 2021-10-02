#include "bits/stdc++.h"
using namespace std;

bool isNum(char c) {
    int t = c - '0';
    return (0<=t&&t<=9);
}

// (+ 1 (+ (+ (+ 3 4) -2) 5))
// 11
// (+ 1 (+ (+ (+ 3 4) -20) 5))
// -7
// (+ 1 (+ (+ (+ 3 4) -2) 5000))
// 5006
// TODO: https://dmoj.ca/problem/ac19p3
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string in;
    getline(cin, in);

    int total = 0, cache = 0;
    bool neg = false;

    for (auto i=0;i<in.size();i++) {
        char c = in[i];
        int t = c - '0';
        bool wasNum = (i-1>=0&&isNum(in[i-1]));
        bool cur = isNum(c);
        // cout<<cur<< "\n";
        // cout<<"wasNum: "<<wasNum<< "\n";
        // if (cur)
        //     cout<<c<<t<<wasNum<< "\n";
        if (c=='-') {
            neg = true;
            // cache = 0;
            continue;
        }
        if (cur) {
            cache *=10;
            cache+=t;
            // cout<<"t: "<<t<< "\n";
            continue;
        }
        if (!cur) {
            // cout<<"cache: "<<cache<< "\n";
            if (neg)
                cache*=-1;
            total += cache;
            cache = 0;
            neg = false;
            continue;
        }
    }
    cout<<total;

    return 0;
}