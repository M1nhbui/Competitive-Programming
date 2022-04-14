#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long m;
    cin >> m;
    long long tich = 1;
    for (long long i = 0; i < m; i++)
    {
        for (long long j = 0; j < m; j++)
        {
            long long x;
            cin >> x;
            if (i == j || i == m - 1 - j)
                tich *= x;
        }
    }
    cout << tich;
}