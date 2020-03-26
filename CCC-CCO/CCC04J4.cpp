#include <bits/stdc++.h>
using namespace std;

#define NPOS string::npos

// DOESNT WORK use v2

const string cs = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";

char shift(char c, int sh)
{
    return cs.at(cs.find(c) + sh);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string key, enc;
    // cin >> key;
    // cin.ignore();
    getline(cin, key);
    getline(cin, enc);

    // cout << shift('B', cs.find('A'));
    // return 0;

    cout << key << "\n"
         << enc << "\n";

    //remove all not letter chars
    for (int i = 0; i < enc.length(); i++)
    {
        // cout << i << endl;
        if (cs.find(enc[i] == NPOS))
        {
            // if (cs.find(!enc[i] >= 0))
            cout << enc[i] << "\n";
            // enc = enc.replace(enc[i], "");
            enc.erase(remove(enc.begin(), enc.end(), enc[i]), enc.end());
        }
    }
    cout << key << "\n"
         << enc << "\n";

    size_t left = enc.length();
    // rows
    int ex = enc.length() % key.length();
    for (int j = 0; j < (enc.length() - ex) / key.length() + (ex == 0 ? 0 : 1); j++)
    { // columns
        for (int i = 0; i < min(left, key.length()); i++)
        {
            int ind = j * enc.length() + i;
            enc[ind] = shift(enc[ind], cs.find(enc[ind]));
        }
        left -= 3;
    }

    cout << enc;

    return 0;
}
