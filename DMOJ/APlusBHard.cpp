#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    cout << N;

    for (int i = 0; i < N; i++)
    {
        string a, b;
        // cin >> a >> b;
        string tmp;
        getline(cin, tmp);
        cout << tmp;

        if (a.length() > b.length())
            swap(a, b);
        string final = "";
        int n1 = a.length(), n2 = b.length();
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int carry = 0;
        for (int i = 0; i < n1; i++)
        {
            int sum = ((a[i] - '0') + (b[i] - '0') + carry);
            final.push_back(sum % 10 + '0');

            carry = sum / 10;
        }
        for (int i = n1; i < n2; i++)
        {
            int sum = ((b[i] - '0') + carry);
            final.push_back(sum % 10 + '0');
            carry = sum / 10;
        }
        if (carry)
            final.push_back(carry + '0');
        reverse(final.begin(), final.end());

        cout << final << "\n";
    }

    return 0;
}