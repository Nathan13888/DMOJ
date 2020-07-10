#include "bits/stdc++.h"
using namespace std;

typedef complex<double> cd;
const double PI = acos(-1);

void fft(vector<cd> &a, bool invert)
{
    int n = a.size();

    for (int i = 1, j = 0; i < n; i++)
    {
        int bit = n >> 1;
        for (; j & bit; bit >>= 1)
            j ^= bit;
        j ^= bit;

        if (i < j)
            swap(a[i], a[j]);
    }

    for (int len = 2; len <= n; len <<= 1)
    {
        double ang = 2 * PI / len * (invert ? -1 : 1);
        cd wlen(cos(ang), sin(ang));
        for (int i = 0; i < n; i += len)
        {
            cd w(1);
            for (int j = 0; j < len / 2; j++)
            {
                cd u = a[i + j], v = a[i + j + len / 2] * w;
                a[i + j] = u + v;
                a[i + j + len / 2] = u - v;
                w *= wlen;
            }
        }
    }

    if (invert)
    {
        for (cd &x : a)
            x /= n;
    }
}

vector<int> multiply(vector<int> const &a, vector<int> const &b)
{
    vector<cd> fa(a.begin(), a.end()), fb(b.begin(), b.end());
    int n = 1;
    while (n < a.size() + b.size())
        n <<= 1;
    fa.resize(n);
    fb.resize(n);

    fft(fa, false);
    fft(fb, false);
    for (int i = 0; i < n; i++)
        fa[i] *= fb[i];
    fft(fa, true);

    vector<int> result(n);
    for (int i = 0; i < n; i++)
        result[i] = round(fa[i].real());
    return result;
}

void convert(string &s, vector<int> &a)
{
    int len = (int)s.size();
    a.reserve(len);
    for (int i = 0; i < len; i++)
    {
        a.push_back((int)s[i] - '0');
    }
}

string A, B;
vector<int> result, a, b;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> A >> B;

    convert(A, a);
    convert(B, b);

    result = multiply(a, b);

    // length of final answer
    int n = (int)(a.size() + b.size() - 1);

    int carry = 0;
    for (int i = n; i >= 0; i--)
    {
        result[i] += carry;
        carry = result[i] / 10;
        result[i] %= 10;
    }

    bool printable = (carry > 0);
    if (printable)
        putchar_unlocked(carry + '0');

    for (int i = 0; i < n; i++)
    {
        if (result[i] > 0 && !printable || i == n - 1)
            printable = true;
        if (printable)
            putchar_unlocked(result[i] + '0');
    }
    putchar_unlocked('\n');

    return 0;
}