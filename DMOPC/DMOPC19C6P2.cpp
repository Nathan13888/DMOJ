#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

// string mult(string num1, string num2)
// {
//     int len1 = num1.size();
//     int len2 = num2.size();
//     if (len1 == 0 || len2 == 0)
//         return "0";
//     vector<int> result(len1 + len2, 0);
//     int i_n1 = 0;
//     int i_n2 = 0;
//     for (int i = len1 - 1; i >= 0; i--)
//     {
//         int carry = 0;
//         int n1 = num1[i] - '0';
//         i_n2 = 0;
//         for (int j = len2 - 1; j >= 0; j--)
//         {
//             int n2 = num2[j] - '0';
//             int sum = n1 * n2 + result[i_n1 + i_n2] + carry;
//             carry = sum / 10;
//             result[i_n1 + i_n2] = sum % 10;
//             i_n2++;
//         }
//         if (carry > 0)
//             result[i_n1 + i_n2] += carry;
//         i_n1++;
//     }
//     int i = result.size() - 1;
//     while (i >= 0 && result[i] == 0)
//         i--;
//     if (i == -1)
//         return "0";
//     string s = "";
//     while (i >= 0)
//         s += std::to_string(result[i--]);

//     return s;
// }

// bool isSmaller(string str1, string str2)
// {
//     int n1 = str1.length(), n2 = str2.length();
//     if (n1 < n2)
//         return true;
//     if (n2 < n1)
//         return false;
//     for (int i = 0; i < n1; i++)
//         if (str1[i] < str2[i])
//             return true;
//         else if (str1[i] > str2[i])
//             return false;
//     return false;
// }
// string diff(string str1, string str2)
// {
//     if (isSmaller(str1, str2))
//         swap(str1, str2);
//     string str = "";
//     int n1 = str1.length(), n2 = str2.length();
//     reverse(str1.begin(), str1.end());
//     reverse(str2.begin(), str2.end());
//     int carry = 0;
//     for (int i = 0; i < n2; i++)
//     {
//         int sub = ((str1[i] - '0') - (str2[i] - '0') - carry);
//         if (sub < 0)
//         {
//             sub = sub + 10;
//             carry = 1;
//         }
//         else
//             carry = 0;
//         str.push_back(sub + '0');
//     }

//     for (int i = n2; i < n1; i++)
//     {
//         int sub = ((str1[i] - '0') - carry);
//         if (sub < 0)
//         {
//             sub = sub + 10;
//             carry = 1;
//         }
//         else
//             carry = 0;
//         str.push_back(sub + '0');
//     }
//     reverse(str.begin(), str.end());
//     return str;
// }

// string factorial(int n)
// {
//     vector<int> res;
//     res.push_back(1);
//     int carry = 0;
//     for (int i = 2; i <= n; i++)
//     {
//         for (int j = 0; j < res.size(); j++)
//         {
//             int tmp = res[j] * i;
//             res[j] = (tmp + carry) % 10;
//             carry = (tmp + carry) / 10;
//         }
//         while (carry != 0)
//         {
//             res.push_back(carry % 10);
//             carry = carry / 10;
//         }
//     }
//     string ret = "";
//     for (int i = res.size() - 1; i >= 0; i--)
//         ret += res[i];
//     cout << ret;
//     return ret;
// }

ull mod(string num, ull a)
{
    int res = 0;
    for (auto i = 0; i < num.length(); i++)
        res = (res * 10 + (int)num[i] - '0') % a;
    return res;
}

vector<int> pFactors(int n)
{
    vector<int> facts;
    while (n % 2 == 0)
    {
        facts.push_back(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            facts.push_back(i);
            n = n / i;
        }
    }
    if (n > 2)
        facts.push_back(n);
    return facts;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    cin >> a >> b;
    int cur = 0;
    for (int n = 1; n < b; n++)
    {
        if (mod(B, n) == 0)
            cur = n;
        printf("\n", n);
    }

    cout << cur;

    return 0;
}