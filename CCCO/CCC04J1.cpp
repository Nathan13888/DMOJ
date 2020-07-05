#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned int s;
    cin >> s;

    double s2 = round(sqrt(s) - 0.5);

    cout << "The largest square has side length " << s2 << ".";

    return 0;
}