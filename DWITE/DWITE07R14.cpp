#include "bits/stdc++.h"
using namespace std;

const int MAX = 999999;

vector<int> dp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int H, S;
    cin>>H>>S;
    dp.resize(H+1);
    fill(dp.begin(), dp.end(), MAX);
    dp[0]=0;
    for(int n=0;n<S;n++) {
        int b;
        cin>>b;
        for(int i=H;i>=b;i--) {
            dp[i] = min(dp[i-b]+1,dp[i]);
        }
    }
    cout << (dp[H] != MAX ? dp[H]:0) << "\n";

    return 0;
}

