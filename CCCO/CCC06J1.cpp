#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int colories = 0;

    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        colories += 461;
        break;
    case 2:
        colories += 431;
        break;
    case 3:
        colories += 420;
        break;
    }
    cin >> choice;
    switch (choice)
    {
    case 1:
        colories += 100;
        break;
    case 2:
        colories += 57;
        break;
    case 3:
        colories += 70;
        break;
    }
    cin >> choice;
    switch (choice)
    {
    case 1:
        colories += 130;
        break;
    case 2:
        colories += 160;
        break;
    case 3:
        colories += 118;
        break;
    }
    cin >> choice;
    switch (choice)
    {
    case 1:
        colories += 167;
        break;
    case 2:
        colories += 266;
        break;
    case 3:
        colories += 75;
        break;
    }

    cout << "Your total Calorie count is " << colories << ".\n";

    return 0;
}