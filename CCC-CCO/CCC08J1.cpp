#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    double h;

    cin >> a >> h;

    double bmi = a / h / h;

    if (bmi > 25)
        cout << "Overweight";
    else if (bmi < 18.5)
        cout << "Underweight";
    else
        cout << "Normal weight";

    return 0;
}