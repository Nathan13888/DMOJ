#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        stack<int> cars, branch;
        int t;
        for (int i = 0; i < N; i++)
        {
            cin >> t;
            cars.push(t);
        }

        int exp = 0;
        while (!cars.empty())
        {
            int item = cars.top();
            cars.pop();
            if (item == exp + 1)
            {
                exp = item;
                while (!branch.empty() && branch.top() == exp + 1)
                {
                    exp = branch.top();
                    branch.pop();
                }
            }
            else
                branch.push(item);
        }
        while (!cars.empty() && branch.top() == exp + 1)
        {
            exp = branch.top();
            branch.pop();
        }

        cout << (branch.empty() ? "Y\n" : "N\n");
    }

    return 0;
}