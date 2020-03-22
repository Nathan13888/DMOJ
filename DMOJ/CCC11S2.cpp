#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, cor = 0;
    cin >> N;
    char student[N];
    for (int i = 0; i < N; i++)
    {
        cin >> student[i];
    }

    for (int i = 0; i < N; i++)
    {
        char tmp;
        cin >> tmp;
        if (student[i] == tmp)
            cor++;
    }
    cout << cor;

    return 0;
}