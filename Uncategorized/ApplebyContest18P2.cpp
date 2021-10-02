#include "bits/stdc++.h"
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int L, S;
    cin>>L>>S;
    string in;
    getline(cin, in);
    getline(cin, in);
    string res = "";
    for (auto i = 0; i<in.size();i++) {
        char c = in.at(i);
        if (c==' ') {
            res += ' ';
        }
        else {
            int t = (c - 'a' + S)%26;
            res += (char)(t + 'a');
        }
    }
    cout<<res;

    return 0;
}