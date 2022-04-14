#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, sum = 0;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            long long in;
            cin >> in;
            if (i % 2 == 0 || j % 2 == 0)
                sum += in;
        }
    }
    cout << sum;
}