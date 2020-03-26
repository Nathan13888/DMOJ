#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

// Did question right but Quantum decides to troll everyone: https://dmoj.ca/problem/bf1troll/rank/
bool comp(const string s1, const string s2)
{
    if (s1.size() != s2.size())
        return s1.size() < s2.size();
    for (ull i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
            return s1[i] < s2[i];
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    // cout << n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // cout << arr[i];
    }

    sort(arr, arr + n, comp);

    for (string s : arr)
    {
        cout << s << "\n";
    }

    return 0;
}