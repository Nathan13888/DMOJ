#include "bits/stdc++.h"
using namespace std;

typedef unsigned long long ull;

const ull p = 4294967296;

ull power(int x, unsigned int y) 
{ 
    ull res = 1;
    x = x % p;
    while (y > 0) { 
        if (y & 1) 
            res = (res * x) % p; 
  
        y = y >> 1;
        x = (x * x) % p; 
    } 
    return res; 
} 
  
int modInverse(int a) 
{ 
    return power(a, p - 2); 
} 
  
int calc(int n) 
{ 
    if (p <= n) 
        return 0; 
    int res = (p - 1); 
    for (int i = n + 1; i < p; i++) 
        res = (res * modInverse(i)) % p; 
    return res; 
} 

// TODO: TOO SLOW
// https://dmoj.ca/problem/factorial
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    ull n;

    while (N--)
    {
        cin >> n;
        cout<<calc(n)<< "\n";

        // int res = 1;
        // while (n > 1)
        // {
        //     res = (res * ((n / p) % 2 ? p - 1 : 1)) % p;
        //     for (int i = 2; i <= n % p; ++i)
        //         res = (res * i) % p;
        //     n /= p;
        // }
        // int out = res % p;
        // cout << out<< "\n";
    }

    return 0;
}