#include "bits/stdc++.h"
#pragma GCC target "sse,sse2,sse3,sse4,abm,avx,mmx,popcnt,tune=native"
#pragma GCC optimize "Ofast"
using namespace std;

typedef unsigned long long ull;

int setbits(ull n)
{
    return __builtin_popcountll(n);
}

// TODO: lookup chat

// (uint_fast64_t)
// return count(n >> 32 & 4294967295) + count(n & 4294967295);
// inline int count(int i)
// {
//     i = i - ((i >> 1) & 0x55555555);
//     i = (i & 0x33333333) + ((i >> 2) & 0x33333333);
//     i = (i + (i >> 4)) & 0x0f0f0f0f;
//     i = i + (i >> 8);
//     i = i + (i >> 16);
//     return i & 0x3f;
// }

int setbits(unsigned long long x)
{
    int count = 0;
    for (int i = 0; i < 64; i++)
    {
        if ((x & (1ull << i)) != 0)
            count++;
    }
    return count;
}

int main()
{
    // for (ull i = 0; i <= 10e8; i++)
    //     /*std::cout << */ setbits(i << 56);
    bitset<64> bs(ULLONG_MAX);
    cout << bs.to_string() << "\n";
    cout << setbits(ULLONG_MAX);
    // for (int i = 0; i <= ULLONG_MAX; i++)
    //     cout << "[" << i << "] --> " << setbits(i) << "\n";
}