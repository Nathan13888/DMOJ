#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

string sum(string str1, string str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);
    string str = "";
    int n1 = str1.length(), n2 = str2.length();
    int diff = n2 - n1;
    int carry = 0;
    for (int i = n1 - 1; i >= 0; i--)
    {
        int sum = ((str1[i] - '0') +
                   (str2[i + diff] - '0') +
                   carry);
        str.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    for (int i = n2 - n1 - 1; i >= 0; i--)
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // F[0] = F[1] = 1;

    int i;
    while (cin >> i)
    {
        if (i == 0)
            break;

        if (i <= 93)
        {
            ull n_2, n_1 = 0, n = 1;
            for (int k = 1; k <= i; k++)
            {
                n_2 = n_1;
                n_1 = n;
                n = n_2 + n_1;
            }
            cout << n << "\n";
        }
        else
        {
            string n_2, n_1 = "7540113804746346429", n = "12200160415121876738";
            for (int k = 94; k <= i; k++)
            {
                n_2 = n_1;
                n_1 = n;
                n = sum(n_1, n_2);
            }
            cout << n << "\n";
        }
    }
    return 0;
}