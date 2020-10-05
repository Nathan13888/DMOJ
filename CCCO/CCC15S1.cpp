#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int K;
    cin >> K;

    vector<int> numbers;

    while (K--)
    {
        int i;
        cin >> i;
        if (i == 0)
            numbers.pop_back();
        else
            numbers.push_back(i);
    }
    long long sum = 0;
    for (int i : numbers)
        sum += i;
    cout << sum << "\n";

    return 0;
}