#include <bits/stdc++.h>
using namespace std;

string sum(string str1, string str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);
    string str = "";
    int n1 = str1.length(), n2 = str2.length();
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    int carry = 0;
    for (int i = 0; i < n1; i++)
    {
        int sum = ((str1[i] - '0') + (str2[i] - '0') + carry);
        str.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    for (int i = n1; i < n2; i++)
    {
        int sum = ((str2[i] - '0') + carry);
        str.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    if (carry)
        str.push_back(carry + '0');
    reverse(str.begin(), str.end());
    return str;
}

bool isSmaller(string str1, string str2)
{
    int n1 = str1.length(), n2 = str2.length();
    if (n1 < n2)
        return true;
    if (n2 > n1)
        return false;
    for (int i = 0; i < n1; i++)
    {
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;
    }
    return false;
}

string diff(string str1, string str2)
{
    if (isSmaller(str1, str2))
        swap(str1, str2);
    string str = "";
    int n1 = str1.length(), n2 = str2.length();
    int diff = n1 - n2;
    int carry = 0;
    for (int i = n2 - 1; i >= 0; i--)
    {
        int sub = ((str1[i + diff] - '0') -
                   (str2[i] - '0') -
                   carry);
        if (sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;

        str.push_back(sub + '0');
    }
    for (int i = n1 - n2 - 1; i >= 0; i--)
    {
        if (str1[i] == '0' && carry)
        {
            str.push_back('9');
            continue;
        }
        int sub = ((str1[i] - '0') - carry);
        if (i > 0 || sub > 0)
            str.push_back(sub + '0');
        carry = 0;
    }

    reverse(str.begin(), str.end());

    return str;
}

string a, b, res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    while (N--)
    {
        cin >> a >> b;
        bool neg = false;

        if (a[0] == '-' && b[0] == '-')
        {
            neg = true;
            res = sum(a.substr(1), b.substr(1));
        }
        else if (a[0] == '-')
        {
            a = a.substr(1);
            if (isSmaller(b, a))
                neg = true;
            res = diff(a, b);
        }
        else if (b[0] == '-')
        {
            b = b.substr(1);
            if (isSmaller(a, b))
                neg = true;
            res = diff(a, b);
        }
        else
        {
            res = sum(a, b);
        }
        if (res.size() > 1 && res[0] == '0')
            res = res.substr(1);
        if (neg)
            cout << "-";
        cout << res << "\n";
    }

    return 0;
}