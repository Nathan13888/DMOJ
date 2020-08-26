#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    for(int n=0;n<5;n++) {
        vector<int> dp;
        int A,S;
        cin>>A>>S;

        dp.resize(A+1);

        while(S--) {
            string title; // not needed
            int rating, size;
            cin>>title>>rating>>size;
            for(int i=A;i>=size;i--) {
                dp[i]=max(dp[i-size]+rating, dp[i]);
            }
        }
        cout<<dp[A]<<"\n";
    }

    return 0;
}

