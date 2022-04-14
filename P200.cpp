#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
#define ll long long
#define lb long double

long long int powREAL(long long int a, long long int b)
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
    ll n;
    cin >> n;
    // cout << powREAL(n, n);
    cout << n * n;
    return 0;
}