#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long a[100000];
    long long c = 1;
    long long b = 1;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i <= n - 2; i++)
    {
        if (a[i] > a[i + 1])
        {
            c++;
        }
        else
        {
            c = 1;
        }
        if (c >= b)
        {
            b = c;
        }
    }
    for (long long i = 0; i <= n - 2; i++)
    {
        if (a[i] < a[i + 1])
        {
            c++;
        }
        else
        {
            c = 1;
        }
        if (c >= b)
        {
            b = c;
        }
    }
    cout << b;
}