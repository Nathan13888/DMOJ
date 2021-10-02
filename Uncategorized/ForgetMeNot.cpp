#include "bits/stdc++.h"
using namespace std;

int comp(string a, string b)
{
    if (a.size() == b.size())
    {
        for (int i = 0; i < (int)a.size(); i++)
        {
            int A = a.at(i);
            int B = b.at(i);
            if (A != B)
                return A > B;
        }
        return -1; // both numbers are equal
    }
    else
        return a.size() > b.size();
}

string p(string a)
{
    // int l = 0;
    // for (int i = 0; i < (int)a.size(); i++)
    // {
    //     if (a.at(i) == '0')
    //         l++;
    //     else
    //         break;
    // }
    // return a.substr(l);
    return a.erase(0, a.find_first_not_of('0'));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string a, b;
    cin >> a >> b;

    int res = comp(p(a), p(b));

    cout << (res == -1 ? "E" : (res ? "S" : "T")) << "\n";

    return 0;
}