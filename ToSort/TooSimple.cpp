#include <bits/stdc++.h>
using namespace std;

// Prime Numbers
int one()
{
    bool b = true;
    return b;
}

int two()
{
    return one() + one();
}

int thr()
{
    return one() + two();
}

int fiv()
{
    return two() + thr();
}

int sev()
{
    return two() * thr() + one();
}

int pow(int b, int n)
{
    int tmp = b;
    for (int i = one(); i < n; i++)
    {
        tmp *= b;
    }
    return tmp;
}
// https://dmoj.ca/problem/toosimple
int main()
{
    // Hello, World!
    // 72 101 108 108 111 44 32 87 111 114 108 100 33
    // string s = "Hello, World!";
    // for (char c : s)
    //     printf("%i\n", c);
    // printf("%i", '\n');
    cout << "Hello, World!";
    char arr[] = {
        pow(two(), thr()) * pow(thr(), two()),
        two() * two() * fiv() * fiv() + one(),
        two() * two() * (fiv() * fiv() + two()),
        two() * two() * (fiv() * fiv() + two()),
        two() * two() * (fiv() * fiv() + two()) + thr(),
        two() * two() * (thr() * thr() + two()),
        pow(two(), fiv()),
        two() * two() * two() * two(),
        pow(two(), two() * two()) * fiv() + fiv() + two(),
        thr() * (fiv() * sev() + two()), two() * thr() * (thr() * thr() * two() + one()), two() * two() * (fiv() * fiv() + two()), two() * two() * fiv() * fiv(), thr() * (thr() * thr() + two()), two() * fiv()};
    // for (char i : arr)
    //     cout << (char)i;

    // cout << (char)0x48 << (char)0x65 << (char)0x6C << (char)0x6C << (char)0x6F << (char)0x2C
    //      << (char)0x20 << (char)0x57 << (char)0x6F << (char)0x72 << (char)0x6C << (char)0x64 << (char)0x21;
}