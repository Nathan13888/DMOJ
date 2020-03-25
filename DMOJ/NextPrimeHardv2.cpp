#include <bits/stdc++.h>
using namespace std;

#define long unsigned long long

// TODO; DOESNT WORK AT ALL
long mod(string num, unsigned int a)
{
    int res = 0;
    for (auto i = 0; i < num.length(); i++)
        res = (res * 10 + (int)num[i] - '0') % a;
    return res;
}

// bool isPrime(string n)
// {
//     if (mod(n, 2) == 0)
//         return false;
//     for (int i = 3; i <= n; i += 2)
//     {
//         if (mod(n, i) == 0)
//             return false;
//     }
//     return true;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    cin >> n;

    if (n == "1")
    {
        cout << "2";
        return 0;
    }
    else
    {
        /* code */
    }

    return 0;
}