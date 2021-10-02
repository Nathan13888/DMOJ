#include "bits/stdc++.h"
using namespace std;

#define mp make_pair
#define pb push_back
#define f first
#define s second

vector<pair<string, int>> c; // list of cities

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    /** NOTE: you could actually solve this problem in this following
     *  while loop that won't require constructing a list by doing
     *  the comparison in the SAME loop
     */
    while (true)
    {
        string name;
        int temp;
        cin >> name >> temp;
        c.pb(mp(name, temp));
        if (name == "Waterloo")
            break;
    }

    int ind = 0; // index of the city with the lowest temperature

    for (int i = 0; i < (int)c.size(); i++)
    {
        if (c[ind].s > c[i].s)
        { // update the index (representing the city) if it has a lower temperature
            ind = i;
        }
    }
    cout << c[ind].f;

    return 0;
}