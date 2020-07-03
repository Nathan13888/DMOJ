#include "bits/stdc++.h"
using namespace std;

int T, S, H;

void printSpaces(string &s)
{
    for (int i = 0; i < S; i++)
        s += " ";
}

void printTines()
{
    string s = "";
    s += "*";
    printSpaces(s);
    s += "*";
    printSpaces(s);
    s += "*";
    for (int i = 0; i < T; i++)
        cout << s << "\n";
}

void printStick()
{
    for (int i = 0; i < 2 * S + 3; i++)
        cout << "*";
    cout << "\n";
}

void printHandle()
{
    string s = "";
    for (int i = 0; i < S + 1; i++)
        s += " ";
    s += "*";
    for (int i = 0; i < H; i++)
        cout << s << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> T >> S >> H;

    printTines();
    printStick();
    printHandle();

    return 0;
}