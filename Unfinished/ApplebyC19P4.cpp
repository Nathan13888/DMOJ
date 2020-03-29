#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int x, y;
};

map<pair<int, int>, pair<int, int>> rec;

int main()
{
    int N;
    scanf("%i", &N);

    vector<Point> points;
    for (int i = 0; i < N; i++)
    {
        Point p;
        scanf("%i%i", &p.x, &p.y);
        points.push_back(p);
    }

    for (Point a : points)
    {
        for (Point b : points)
        {
            if (a.x == b.x && a.y > b.y)
            {
                pair<int, int> &res = rec[make_pair(a.y, b.y)];
                if (a.x < res.first)
                    res.first = a.x;
                if (a.x > res.second)
                    res.second = a.x;
            }
        }
    }
    unsigned int area = 0;
    for (pair<pair<int, int>, pair<int, int>> e : rec)
    {
        unsigned int newArea = abs((e.first.first - e.first.second) * (e.second.first - e.second.second));
        printf("%i\n", area);
        if (newArea > area)
            area = newArea;
    }

    printf("%i\n", area);

    return 0;
}