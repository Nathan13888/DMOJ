#include <bits/stdc++.h>
using namespace std;

bool comp(const string s1, const string s2)
{
    if (s1.size() != s2.size())
        return s1.size() < s2.size();
    for
        return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n, comp);

    for (string s : arr)
    {
        cout << s << "\n";
    }

    return 0;
}