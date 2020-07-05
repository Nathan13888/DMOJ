#include "bits/stdc++.h"
using namespace std;

const string DA = " * * *", GAP = "     ";

const string F[] = {
    "02356789",  //0 top
    "045689",    //1 top-left
    "01234789",  //2 top-right
    "2345689",   //3 middle
    "0268",      //4 bottom-left
    "013456789", //5 bottom-right
    "0235689"    //6 bottom
};

char n;

void printFlats(int i)
{
    if (F[i].find(n) != string::npos)
        cout << DA << "\n";
    else if (i == 3)
        cout << "\n";
}

void printSides(int i)
{
    string s = "";
    if (F[i].find(n) != string::npos)
        s += "*";
    else
        s += " ";
    if (F[i + 1].find(n) != string::npos)
    {
        s += GAP;
        s += "*";
    }
    cout << s << "\n"
         << s << "\n"
         << s << "\n";
}

void printAnswer()
{
    printFlats(0);
    printSides(1);
    printFlats(3);
    printSides(4);
    printFlats(6);
}

void test()
{
    for (int i = 0; i < 10; ++i)
    {
        n = i + '0';
        printAnswer();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    printAnswer();

    // test();

    return 0;
}