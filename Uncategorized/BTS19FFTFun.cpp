#include "bits/stdc++.h"
using namespace std;

typedef unsigned long long ull;

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
    ull n = 1;
    while (n < (a.size() + b.size()))
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


string mult(string &vi, string &vj) {
    string ret;
    vector<int> result, a, b;
    convert(vi, a);
    convert(vj, b);

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
        ret+=(carry + '0');

    for (int i = 0; i < n; i++)
    {
        if (result[i] > 0 && !printable || i == n - 1)
            printable = true;
        if (printable)
            ret+=(result[i] + '0');
    }
    return ret;
}

//const ull MOD=1996488708; //pisano period for 998244353
const ull MOD=998244353;

string mod(string num)
{
    int res = 0;
    for (auto i = 0; i < (int)num.size(); i++)
         res = (res*10+(int)num[i]-'0')%MOD;
    return to_string(res);
}

long long get_pisano_period(long long m);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //cout<<get_pisano_period(MOD);
    //return 0;
    int T;
    cin>>T;
    while(T--){
        int N;
        string X,Y;
        cin>>N>>X>>Y;
        vector<string> v;
        v.resize(N+2);
        v[0]=X;
        v[1]=Y;
        //v[2]=mult(X,Y);

        int i=0,j=1;//j=2;
        for(int x=2;x<N+2;x++){
            v[x]=mult(v[i],v[j]);
            if(i+1==j)
                j++;
            else
                i++;
        }
        // compute answer: product modulo MOD
        string tmp=v[0];
        for(int i=1;i<N+2;i++) {
            //cout<<v[i]<<"\n";
            tmp=mult(tmp,v[i]);
        }
        cout<<tmp<<"\n";
        cout<<mod(tmp)<<"\n";
    }

    return 0;
}

long long get_pisano_period(long long m) {
    long long a = 0, b = 1, c = a + b;
    for (int i = 0; i < m * m; i++) {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1) return i + 1;
    }
}

