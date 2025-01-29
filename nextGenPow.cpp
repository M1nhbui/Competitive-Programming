#include <bits/stdc++.h>
using namespace std;
#define MAX 100

long long powREAL(long long a, long long b)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b == 1)
    {
        return a;
    }
    else if (b % 2 == 0)
    {
        long long x = powREAL(a, b / 2);
        return x * x;
    }
    else
    {
        long long x = powREAL(a, (b - 1) / 2);
        return x * x * a;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << powREAL(a, b);
    return 0;
}