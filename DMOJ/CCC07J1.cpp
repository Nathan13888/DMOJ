#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + 3);
    cout << arr[1];

    return 0;
}