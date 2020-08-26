#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    for(int n=0;n<5;n++) {
        string s;
        cin>>s;
        bool repeated;
        for(int i=0;i<(int)s.size();i++) {
            repeated = false;
            for(int j=0;j<(int)s.size();j++) {
                if (j!=i)
                    if(s[j]==s[i]) {
                        repeated = true;
                        break;
                    }
            }
            if(!repeated) {
                cout << s[i] << "\n";
                break;
            }
        }
    }

    return 0;
}


