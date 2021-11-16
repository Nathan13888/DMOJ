#include "bits/stdc++.h"
using namespace std;

vector<int> shitz;

double area = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    for (auto i = 0; i < N + 1; i++)
    {
        int t;
        cin >> t;
        shitz.push_back(t);
    }
    for (auto i = 0; i < N; i++)
    {
        double w;
        cin >> w;
        area += w * (shitz[i] + shitz[i + 1]) / 2;
    }
    printf("%f\n", area);

    return 0;
}