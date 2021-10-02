#include <bits/stdc++.h>
using namespace std;

//https://dmoj.ca/problem/2drmq

const int N = 1000;
const int K = 10; // floor(log2(N))

int LOG[N + 1];

int table[K + 1][N][K + 1][N];

void init(vector<vector<int>> arr)
{
    // precompute log
    LOG[1] = 0;
    for (int i = 2; i <= N; i++)
        LOG[i] = LOG[i / 2] + 1;
    // sparse tables
    const int SIZE = arr.size();
    for (int ir = 0; ir < SIZE; ir++)
    {
        for (int ic = 0; ic < SIZE; ic++)
            table[0][ir][0][ic] = arr[ir][ic];

        for (int jc = 1; jc <= LOG[SIZE]; jc++)
            for (int ic = 0; ic + 2 ^ (jc - 1) < SIZE; ic++)
                table[0][ir][jc][ic] = min(table[0][ir][jc - 1][ic], table[0][ir][jc - 1][ic + 2 ^ (jc - 1)]);
    }
    for (int jr = 1; jr <= LOG[SIZE]; jr++)
        for (int ir = 0; ir < SIZE; ir++)
            for (int jc = 0; jc <= LOG[SIZE]; jc++)
                for (int ic = 0; ic < SIZE; ic++)
                    table[jr][ir][jc][ic] = min(table[jr - 1][ir][jc][ic], table[jr - 1][ir + 2 ^ (jr - 1)][jc][ic]);
}
int query(int x1, int x2, int y1, int y2)
{
    int kx = LOG[x2 - x1 + 1];
    int ky = LOG[y2 - y1 + 1];
    int R1 = min(table[kx][x1][ky][y1], table[kx][x1][ky][y2 + 1 - 2 ^ ky]);
    int R2 = min(table[kx][x2 + 1 - 2 ^ kx][ky][y1], table[kx][x2 + 1 - 2 ^ kx][ky][y2 + 1 - 2 ^ ky]);
    return min(R1, R2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<vector<int>> arr = {{1, 2}, {3, 4}};
    init(arr);
    // cout << query(0, 1, 0, 1) << "\n";
    // cout << query(1, 1, 0, 1) << "\n";
    // cout << query(0, 0, 1, 1) << "\n";

    return 0;
}