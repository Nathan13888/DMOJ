#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int N,M,cnt=0;

    cin>>N>>M;

    for(int i=0;i<M;i++){
        int t;
        cin>>t;
        if(t>=N)
            cnt++;
    }

    cout<<cnt;

    return 0;
}
