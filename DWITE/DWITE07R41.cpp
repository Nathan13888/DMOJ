#include "bits/stdc++.h"
using namespace std;

void calc (double p, double theta) {
    double angle = theta*3.1415/180;
    double time = p*sin(angle)/9.81*2;
    double res = p*time*cos(angle);
    cout<<round(res)<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    for(int i=0;i<5;i++) {
        int theta, p;
        cin>>theta>>p;
        calc(p,theta);
    }
    
    return 0;
}
