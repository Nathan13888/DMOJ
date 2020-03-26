#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, diff, fine;
    cin >> a >> b;
    diff = b - a;

    if (diff <= 0)
    {
        cout << "Congratulations, you are within the speed limit!";
        return 0;
    }
    else if (diff <= 20)
        fine = 100;
    else if (diff <= 30)
        fine = 270;
    else
        fine = 500;
    cout << "You are speeding and your fine is $" << fine << ".";

    return 0;
}