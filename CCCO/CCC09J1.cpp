#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string num = "9780921418";

    unsigned long long sum = 0;

    string a, b, c;
    cin >> a >> b >> c;
    num += (a + b + c);

    bool B = false;

    for (auto x : num)
    {
        int i = x - '0';
        if (B)
            sum += i * 3;
        else
            sum += i;
        B = !B;
    }

    cout << "The 1-3-sum is " << sum << "\n";

    return 0;
}