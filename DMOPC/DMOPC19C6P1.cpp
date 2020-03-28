#include <bits/stdc++.h>
using namespace std;

#define PFF pair<double, double>

double slope(PFF a, PFF b)
{
    return (a.second - b.second) / (a.first - b.first);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    double Ax1, Ay1, Ax2, Ay2, Bx1, By1, Bx2, By2;
    cin >> Ax1 >> Ay1 >> Ax2 >> Ay2 >> Bx1 >> By1 >> Bx2 >> By2;

    PFF A1, A2, B1, B2;
    A1 = make_pair(Ax1, Ay1);
    B1 = make_pair(Ax2, Ay2);
    A2 = make_pair(Bx1, By1);
    B2 = make_pair(Bx2, By2);

    // Same slope
    double a1 = B1.second - A1.second;
    double b1 = A1.first - B1.first;
    double c1 = a1 * (A1.first) + b1 * (A1.second);
    double a2 = B2.second - A2.second;
    double b2 = A2.first - B2.first;
    double c2 = a2 * (A2.first) + b2 * (A2.second);
    double d = a1 * b2 - a2 * b1;
    if (d == 0)
    {
        // Parallel, check coincidence: m of A1-A2 and A1-B2
        double m1, m2, m3, m4;
        m1 = slope(A1, A2);
        m2 = slope(A1, B2);
        m3 = slope(B1, A2);
        m4 = slope(B1, B2);
        if (abs(m1 - m2) < 1e-6 && abs(m3 - m4) < 1e-6)
        {
            printf("coincident");
        }
        else
            printf("parallel");
    }
    else
    {
        // Print intersection
        double x = (b2 * c1 - b1 * c2) / d;
        double y = (a1 * c2 - a2 * c1) / d;
        printf("%.6f", x);
        printf(" ");
        printf("%.6f", y);
    }
    return 0;
}