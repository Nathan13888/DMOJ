#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N = 2;
    while (N--)
    {
        int n;
        cin >> n;
        int arr[n], total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (auto i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            total += arr[i] * tmp;
        }
        cout << total << " ";
    }

    return 0;
}