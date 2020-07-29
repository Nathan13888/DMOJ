#include "bits/stdc++.h"
using namespace std;

string dic[] = {
    "", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

string format(string s)
{
    string res = "";
    res += s.substr(0,3);
    res += "-";
    res += s.substr(3,3);
    res += "-";
    res += s.substr(6,4);
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    string s;

    while (t--)
    {
        cin >> s;

        string res = "";
        int cnt = 0;
        for (auto j = 0; j < s.size(); j++)
        {
            if (cnt > 9)
                break;
            char c = s[j];
            if (c == '-')
                continue;
            if ('A' <= c && c <= 'Z')
            {
                for (int i = 1; i <= 10; i++)
                {
                    for (char x : dic[i])
                    {
                        if (x == c)
                        {
                            res += i + '0';
                            break;
                        }
                    }
                }
            }
            else //if ('0' <= c && c <= '9')
                res += c;
            cnt++;
        }
        cout << format(res) << "\n";
    }

    return 0;
}