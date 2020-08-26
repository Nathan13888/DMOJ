#include "bits/stdc++.h"
using namespace std;

string SS[6];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    for (int i =0;i<5;i++) {
        string q, tmp;
        getline(cin, q);
        getline(cin, tmp);
        int I = tmp[0]-'0';
        
        SS[I] = q;
    }
    for(int i = 1; i<=5;i++) {
        cout<<SS[i]<< "\n";
    }

    return 0;
}