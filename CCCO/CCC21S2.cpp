#include "bits/stdc++.h"
using namespace std;

vector<vector<bool>> THING;

void printBoard(int M, int N)
{
    for (int a = 0; a < M; a++)
    {
        for (int b = 0; b < N; b++)
            cout<<THING[a][b];
            // cout << (THING[a][b] ? "G" : "B");
        cout << "\n";
    }
}

void fillThisDumb(int m, int n)
{
    vector<bool> EMPTY(n);
    fill(EMPTY.begin(), EMPTY.end(), false);
    THING.resize(m);
    for (auto i = 0; i < m; i++)
        THING[i] = EMPTY;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int M, N, K;
    cin >> M >> N >> K;

    fillThisDumb(M, N);
    // printBoard(M, N);

    for (int i = 0; i < K; i++)
    {
        char WHAT;
        int NUM;
        cin >> WHAT >> NUM;
        NUM--;
        if (WHAT == 'R')
        {
            for (int j = 0; j < N; j++)
                THING[NUM][j] = !THING[NUM][j];
        }
        else
        {
            for (int k = 0; k < M; k++)
                THING[k][NUM] = !THING[k][NUM];
        }
    }

    // printBoard(M, N);
    int TOTAL = 0;
    for (int a = 0; a < M; a++)
        for (int b = 0; b < N; b++)
            if (THING[a][b])
                TOTAL++;

    cout << TOTAL << "\n";

    return 0;
}